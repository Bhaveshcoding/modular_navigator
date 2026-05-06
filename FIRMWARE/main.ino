// ============================================================
//  MODULAR SMART NAVIGATION ASSIST — ESP32 Firmware
// ============================================================


#include <Arduino.h>

// ── PIN DEFINITIONS ─────────────────────────────────────────

#define TRIG_FRONT  12
#define ECHO_FRONT  13

#define TRIG_LEFT   25
#define ECHO_LEFT   26

#define TRIG_RIGHT  27
#define ECHO_RIGHT  14

#define TRIG_STAIR  18
#define ECHO_STAIR  19

#define MOTOR_LEFT   32
#define MOTOR_RIGHT  33
#define MOTOR_FRONT  15

// ── DISTANCE THRESHOLDS ─────────────────────────────────────
#define DIST_NEAR      30
#define DIST_MEDIUM    70
#define DIST_FAR      150

#define STAIR_DROP     50

// ── TIMING ──────────────────────────────────────────────────
#define PULSE_SLOW_ON    200
#define PULSE_SLOW_OFF   600
#define PULSE_FAST_ON    150
#define PULSE_FAST_OFF   150
#define STAIR_LONG_ON    500
#define STAIR_PAUSE      300

#define SENSOR_INTERVAL  60

// ── PWM ─────────────────────────────────────────────────────
#define MOTOR_STRENGTH  200

#define CH_LEFT   0
#define CH_RIGHT  1
#define CH_FRONT  2
#define PWM_FREQ  5000
#define PWM_RES   8

enum VibeState { SILENT, SLOW_PULSE, FAST_PULSE, CONTINUOUS };

// ── GLOBALS ─────────────────────────────────────────────────
float distFront, distLeft, distRight, distStair;

unsigned long lastSensorRead = 0;
unsigned long lastPulseToggle[3] = {0,0,0};
bool pulseOn[3] = {false,false,false};

bool stairActive = false;
unsigned long stairPatternStart = 0;

// ── FUNCTIONS ───────────────────────────────────────────────

float readDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);
  if (duration == 0) return 999;
  return duration * 0.0343 / 2;
}

VibeState getVibeState(float dist) {
  if (dist <= 0 || dist > DIST_FAR) return SILENT;
  if (dist <= DIST_NEAR) return CONTINUOUS;
  if (dist <= DIST_MEDIUM) return FAST_PULSE;
  return SLOW_PULSE;
}

void runMotor(int channel, bool on) {
  ledcWrite(channel, on ? MOTOR_STRENGTH : 0);
}

void stopAllMotors() {
  ledcWrite(CH_LEFT, 0);
  ledcWrite(CH_RIGHT, 0);
  ledcWrite(CH_FRONT, 0);
}

void handlePulse(int channel, VibeState state, unsigned long now) {
  switch(state) {
    case SILENT:
      runMotor(channel,false);
      break;

    case CONTINUOUS:
      runMotor(channel,true);
      break;

    case SLOW_PULSE:
    case FAST_PULSE: {
      unsigned long onTime  = (state == SLOW_PULSE) ? PULSE_SLOW_ON : PULSE_FAST_ON;
      unsigned long offTime = (state == SLOW_PULSE) ? PULSE_SLOW_OFF : PULSE_FAST_OFF;

      unsigned long elapsed = now - lastPulseToggle[channel];
      unsigned long limit = pulseOn[channel] ? onTime : offTime;

      if (elapsed >= limit) {
        pulseOn[channel] = !pulseOn[channel];
        runMotor(channel, pulseOn[channel]);
        lastPulseToggle[channel] = now;
      }
      break;
    }
  }
}

void runStairPattern(unsigned long now) {
  if (stairPatternStart == 0) stairPatternStart = now;

  unsigned long e = now - stairPatternStart;

  if (e < STAIR_LONG_ON) {
    runMotor(CH_LEFT,true);
    runMotor(CH_RIGHT,true);
    runMotor(CH_FRONT,true);
  }
  else if (e < STAIR_LONG_ON + STAIR_PAUSE) {
    stopAllMotors();
  }
  else if (e < 2*STAIR_LONG_ON + STAIR_PAUSE) {
    runMotor(CH_LEFT,true);
    runMotor(CH_RIGHT,true);
    runMotor(CH_FRONT,true);
  }
  else if (e < 2*STAIR_LONG_ON + 2*STAIR_PAUSE) {
    stopAllMotors();
  }
  else {
    stairPatternStart = now;
  }
}

// ── SETUP ───────────────────────────────────────────────────
void setup() {
  Serial.begin(115200);

  int trigPins[] = {12,25,27,18};
  int echoPins[] = {13,26,14,19};

  for(int i=0;i<4;i++){
    pinMode(trigPins[i], OUTPUT);
    pinMode(echoPins[i], INPUT);
  }

  ledcSetup(CH_LEFT, PWM_FREQ, PWM_RES);
  ledcSetup(CH_RIGHT, PWM_FREQ, PWM_RES);
  ledcSetup(CH_FRONT, PWM_FREQ, PWM_RES);

  ledcAttachPin(MOTOR_LEFT, CH_LEFT);
  ledcAttachPin(MOTOR_RIGHT, CH_RIGHT);
  ledcAttachPin(MOTOR_FRONT, CH_FRONT);

  stopAllMotors();
}

// ── LOOP ────────────────────────────────────────────────────
void loop() {
  unsigned long now = millis();

  if (now - lastSensorRead >= SENSOR_INTERVAL) {
    lastSensorRead = now;

    distFront = readDistance(TRIG_FRONT, ECHO_FRONT);
    distLeft  = readDistance(TRIG_LEFT,  ECHO_LEFT);
    distRight = readDistance(TRIG_RIGHT, ECHO_RIGHT);
    distStair = readDistance(TRIG_STAIR, ECHO_STAIR);

    Serial.printf("F:%.1f L:%.1f R:%.1f D:%.1f\n",
      distFront, distLeft, distRight, distStair);

    stairActive = (distStair > STAIR_DROP);
  }

  if (stairActive) {
    runStairPattern(now);
    return;
  }

  stairPatternStart = 0;

  handlePulse(CH_LEFT,  getVibeState(distLeft),  now);
  handlePulse(CH_RIGHT, getVibeState(distRight), now);
  handlePulse(CH_FRONT, getVibeState(distFront), now);
}