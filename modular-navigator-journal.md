# Modular Navigator — Journal Export

- Exported at: 2026-05-07T12:10:04Z
- Project ID: 2297
- Entries: 12

## Entry 1
- ID: 2904
- Author: bhaveshtushar123
- Created At: 2026-04-19T16:01:04Z

### Content

Today I worked on both the planning and building parts of my Smart Navigation Assist project. I finished the parts, which are an ESP32, four ultrasonic sensors, and three buzzers for simulation. I also made sure that all the GPIO connections were correct. I made the circuit virtually on Wokwi (IT'S SO GUD!!) to make sure everything worked before I used real hardware. 

 I tested each part on its own, starting with the four sensors and then the buzzers. The buzzers worked fine, but the sensors first gave back 0 or strange values. After fixing the code, I realized that the TRIG sends a pulse and the ECHO only goes HIGH when sound reflects. Distance reads 0 or max if there is no object and ECHO stays LOW. It's not really analog; it's more like timed digital pulses.


This was helpful as i understood working of HC-SR04 sensor(Very important for project). 

DESIGN PLAN-

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjA1OCwicHVyIjoiYmxvYl9pZCJ9fQ==--aa4ea5bcec02f2b265bbea4e9bb412a7ce629dd2/image.png)

ELECTRONICS MAP(wowki)-


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjA1OSwicHVyIjoiYmxvYl9pZCJ9fQ==--5ae7133447126d26bab656d5d5984252649e465b/image.png)

WOWKI LINK: https://wokwi.com/projects/461725213892270081 (TA DA!)


### Recording Links

- https://lookout.hackclub.com/api/media/96f04053-6852-4a52-a8ff-21b72b4bf49e/video.mp4
- https://lookout.hackclub.com/api/media/53afaf1c-2f9a-4fce-b0c6-5a0598f88462/video.mp4
- https://lookout.hackclub.com/api/media/14849718-619d-4b8d-9584-e350c174495b/video.mp4

## Entry 2
- ID: 3078
- Author: bhaveshtushar123
- Created At: 2026-04-20T18:08:50Z

### Content

Today was actually pretty productive :) I worked on the planning + build phase of my smart navigation project and finalized the BOM (shown below)!! I also spent time finding the cheapest links for all components since Hack Club is a non-profit, so I had to keep costs low. That part was kinda tiring but also satisfying when I found good deals!!

Then I worked on electronics + code and ran into errors. PlatformIO wasn’t configured properly, so Arduino.h wasn’t detected, which confused me at first! After fixing the setup, things started working properly :)

For the code , it reads distances from 4 ultrasonic sensors and converts that into vibration patterns. Closer objects mean faster signals!! The stair sensor overrides everything and triggers a danger alert. I also used millis() instead of delay, which is better.

Overall, good progress today and I understand the system much better now :)
BOM-![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjM5MCwicHVyIjoiYmxvYl9pZCJ9fQ==--1cc4b6a06409929c2d5b7f2b1a70222dd61f5b6e/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/5db7f4ff-165c-4a4a-be43-da1a6d484d4a/video.mp4
- https://lookout.hackclub.com/api/media/343b3d40-4925-427c-8789-cf96c91a24fc/video.mp4
- https://lookout.hackclub.com/api/media/900eb3fd-bc9a-4b2e-97f7-78493046b0a4/video.mp4
- https://lookout.hackclub.com/api/media/8d682762-4cff-43d3-89aa-19d1b9be344a/video.mp4

## Entry 3
- ID: 3235
- Author: bhaveshtushar123
- Created At: 2026-04-21T16:50:50Z

### Content

My project made a lot of progress today. Before I built the hardware, I tested some simple code in Wokwi to make sure everything worked. It felt great that nothing broke this time, lol. After that, I opened CAD and started working on the design of the enclosure.

I started by making the main box, which was 110 × 60 mm and 35 mm thick. This made it feel more like a real product than just an idea. Then I used the shell tool (2.5 mm thick) to hollow it out. That part was very satisfying.LOL!

Then I drew a layout sketch and marked where everything goes. The battery goes on the side, and the ESP32 goes in the middle (it finally looks neat!). Then I cut the battery slot (70 × 20 × 20 mm), and added 4 standoffs (5 mm height) for the ESP32.

Overall, super productive day! Getting closer!!

CAD1-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjcyMywicHVyIjoiYmxvYl9pZCJ9fQ==--bb7265931ad3664c476a8d7c668047e83a3f0ecd/image.png)
CAD2(HOME)-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjcyNCwicHVyIjoiYmxvYl9pZCJ9fQ==--fee4e16c127c3ca34810b5dcf5c03be71a011174/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/5ed5bc85-adbe-401a-947a-045290d420cb/video.mp4
- https://lookout.hackclub.com/api/media/3a09da94-43e3-47b6-b38f-2f5fbf61b901/video.mp4

## Entry 4
- ID: 3430
- Author: bhaveshtushar123
- Created At: 2026-04-22T18:38:17Z

### Content

Today was CAD-3, and to be honest, this is when things started to feel REAL. I worked on making the enclosure more than just a box.

First, I put the battery slot in the right place and made sure the battery fits snugly (not like before, when it slid around ). Then I worked on the motor slots and made sure they were close to the outer walls so that vibrations could be felt properly. This part was kind of fun, to be honest.


After that, I added wire channels (which are kind of annoying but very important) so that everything doesn't turn into a spaghetti mess later . I also made the USB cutout, which made it seem like a real device you could use.

Lastly, I put in screw posts so the lid could be attached later. This made the product feel more real.

This phase was mostly about structure and usability, and it went pretty well .

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzA1OCwicHVyIjoiYmxvYl9pZCJ9fQ==--97cc77c9e22621249f2c8bfa3adc20655a799b38/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzA1OSwicHVyIjoiYmxvYl9pZCJ9fQ==--1abf626f02301a34a7218dc57673cf7679f04d9d/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzA2MCwicHVyIjoiYmxvYl9pZCJ9fQ==--83fc0b3f754b2ef978d8252f51e2c5fb5e1cc60f/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzA2MSwicHVyIjoiYmxvYl9pZCJ9fQ==--fed3065336717e3dea16d9e237f0c8dabac4d565/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzA2MiwicHVyIjoiYmxvYl9pZCJ9fQ==--28199a86f54dcd70e4b7ba4b2639d79edfa758ab/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/423e5552-8347-4475-8429-093e74d94d92/video.mp4
- https://lookout.hackclub.com/api/media/63656baf-0228-4f70-aee8-f9e23df55114/video.mp4

## Entry 5
- ID: 3592
- Author: bhaveshtushar123
- Created At: 2026-04-23T18:26:58Z

### Content

Today I worked on Phase 4, which is basically making my design look like a real product. Yay! First, I made the lid by choosing the top face and moving it back a little bit (+0.3 mm) so that it fits and doesn't get stuck. That little thing seemed important because the lid wouldn't close right without it.

Then I made it a separate body by extruding it to 3 mm. 
Next, I made sure the screw holes were in the right place by projecting the posts and cutting through the lid. This part needed some attention, but it worked out.

Finally, I put fillets on the edges, and right away, everything looked smoother and more professional. But, I still have to make it BETTER by adding some engravings.

CAD-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzQwOCwicHVyIjoiYmxvYl9pZCJ9fQ==--f1d0884a12d53f5e29bfd29b5fb46d69907c95b7/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzQxMCwicHVyIjoiYmxvYl9pZCJ9fQ==--3773e79b2312a9da258f375acf3baf9fdd8a7dae/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzQxMSwicHVyIjoiYmxvYl9pZCJ9fQ==--2de07ccb95ae186a5e51adb72d344dd226e79cbe/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzQxMiwicHVyIjoiYmxvYl9pZCJ9fQ==--be18209e461c5500b636a19786b87dfc9287a199/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/73b901b1-3a20-4689-9d5b-a9be1ca990f6/video.mp4

## Entry 6
- ID: 3742
- Author: bhaveshtushar123
- Created At: 2026-04-24T18:01:52Z

### Content

Today I worked on finishing Phase 4 and adding the final touches to my enclosure. I focused a lot on engraving, where I added the “Modular Navigator” text and worked on placing the logo properly on the lid. Getting the engraving to look clean and readable took some effort, but it made the design feel way more like a real product, yay!!

I also did some renders to see how everything looks visually, and it actually came out pretty clean and professional. But when I tried fitting the electronics, Irealisedd something annoying—the HC-SR04 sensors fit, but the module with screws doesn’t align properly inside. That means I’ll have to redo that part of the design.

Honestly, that part was kinda frustratin,g and I was a bit bummed, but it helped me understand how important exact fitting is.

CAD-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzcxMSwicHVyIjoiYmxvYl9pZCJ9fQ==--de70f7723aea4fa5865de3d9cb52ecf540ce9e77/image.png)****
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzcxNywicHVyIjoiYmxvYl9pZCJ9fQ==--6d4ba7c25cd7e190a5b493e8e095d73d41e12cde/image.png)



THE SAD IMAGE(not fitting screw holes)-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzcxMiwicHVyIjoiYmxvYl9pZCJ9fQ==--aacaa4704a7afe63153feaecd36dd26561773b52/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/28c2841d-0a9f-4278-8184-a3d06a9b7f96/video.mp4
- https://lookout.hackclub.com/api/media/6947c273-2639-4015-b042-9eb7b65ec9cb/video.mp4

## Entry 7
- ID: 3909
- Author: bhaveshtushar123
- Created At: 2026-04-25T18:51:41Z

### Content

Today was lowkey painful ngl like DAMN!… like I thought I was done but nah, esp32 said not today bruh!!! The raised parts and GPIO pins were taking way too much space, so I had to fix that whole setup again. spent time trying to align it properly so it actually fits inside and doesn’t clash with everything.

Then I added the TP4056 and space for vibrator motors, which was fine, but I also just added more chaos inside. After that, I flipped the ESP322 upside down (DUH! should’ve done earlier), but that decision literally forced me to redo so much stuff. like delete parts, rebuild, re-align everything… even had to redo renders again,n which was just annoying.

felt kinda bummed for a bit, but yeah,eah it’s cleaner now and makes more sense. still sucks to redo work but whatever, progress I guess… yay!!!
(Didn't wanna show my SPOTIFY 'cause I be gatekeeping those secret bangers, so I blacked it :0...)

CAD-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODA0OCwicHVyIjoiYmxvYl9pZCJ9fQ==--c41344b2b8da88856856e1bed9dd0dbfa145e0f5/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODA1MCwicHVyIjoiYmxvYl9pZCJ9fQ==--53e180be1fd21c61a7bfb30172835f18ed06eae5/image.png)
TP4056 module-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODA1MiwicHVyIjoiYmxvYl9pZCJ9fQ==--d05df85e739fc88397e6530f32042e01d7f9114a/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/2d840e0a-9092-4c45-9d23-45d74c9bf7ce/video.mp4
- https://lookout.hackclub.com/api/media/091ea328-86c9-4908-a11b-210ea019d73d/video.mp4

## Entry 8
- ID: 4231
- Author: bhaveshtushar123
- Created At: 2026-04-27T15:49:31Z

### Content

### CAD DONE!!!!!!!!
So today I finally pulled everything together and it actually feels kinda crazy how it all came from just an idea. I started by building the full tool and then designing the complete model with all the electronics inside like the ESP32, HC-SR04 sensors, battery and motors. Getting everything to fit properly was honestly a bit chaotic but also really satisfying when it started making sense.

Then I made sure the design is actually printable by splitting it into two parts — the main body and the lid. That part felt super important because now it’s not just a model, it’s something I can build. After that I exported everything properly in the right formats, including all components and final assembly files.

At the end I did a full check to confirm everything fits, aligns and works together. It’s kinda crazy seeing it all come together like this, feels like a real product now!!!
CAD-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NCwicHVyIjoiYmxvYl9pZCJ9fQ==--a84706d893747b7c4add23416adadf48e579596a/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NSwicHVyIjoiYmxvYl9pZCJ9fQ==--6e633a82262fa8b2f27ca8c9c8163c3566cad619/image.png)
FORMAT-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODc4NiwicHVyIjoiYmxvYl9pZCJ9fQ==--7f8d61bdcbb858ff5613f9ff600c25884715ca9e/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/d19717d9-c4b5-441b-87ff-131563277f09/video.mp4
- https://lookout.hackclub.com/api/media/eadbcab1-22cb-4a26-bcb6-073bb4b85df5/video.mp4
- https://lookout.hackclub.com/api/media/ea39bc07-2de4-4cb9-abf3-7bb2e0203fa0/video.mp4

## Entry 9
- ID: 4367
- Author: bhaveshtushar123
- Created At: 2026-04-28T17:21:37Z

### Content

Today was mostly about checking and fixing everything before the final submission, and it felt pretty serious. First, I went through all my files to make sure nothing was missing or messed up. I checked the CAD files, exports, and made sure everything was saved and organized properly. Then, I looked over the actual design again to ensure that all the electronics and parts could be assembled correctly. I focused on whether the screws aligned and if everything fit together without any issues.

I realized I needed to update my BOM, so I added M1.5 screws since they are necessary for proper assembly. It’s a small detail, but important. After that, I worked on designing my zine page, placing all the parts, arrows, names, and descriptions to clearly explain the project flow.

Today involved more polishing than building, but it made everything feel complete and ready. It was a bit stressful, but also satisfying.

DESIGN OF ZINE-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTA1OCwicHVyIjoiYmxvYl9pZCJ9fQ==--fecec9edffc46c4e92f97dbd4b45c9cc99ff7735/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/6c405dc1-6fa2-44d5-b7a3-46857ac3f703/video.mp4
- https://lookout.hackclub.com/api/media/cc263992-36df-4851-ad57-1e389c6b53d3/video.mp4

## Entry 10
- ID: 4652
- Author: bhaveshtushar123
- Created At: 2026-04-30T18:12:37Z

### Content

I officially started working on the zine page. At first, it was a little hard to understand, but after watching a tutorial and playing around with Canva (I couldn't use "Figma"), it got easier.

Most of the time, I worked on the layout, putting the main render in place and using arrows to point out certain details. I added short bits of information about important parts like the sensors, ESP32, and motors. This really helps with the design. It was also a big win to make an exploded view of the model.

Lastly, I made sure that all of my renders and CAD files were up to date with the most recent version of the design.  There is still some work to be done, but it is definitely coming together.

Zine-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTc1NSwicHVyIjoiYmxvYl9pZCJ9fQ==--73a5d044f91f2b70fc2ced99d66ea47e7b5c03da/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/b7a7cff3-e07d-4ab3-aac9-778835807ab3/video.mp4
- https://lookout.hackclub.com/api/media/3287fb53-a642-45c7-85d9-3a113e105071/video.mp4
- https://lookout.hackclub.com/api/media/205045d2-c9c9-45f0-9262-d10a84d71213/video.mp4

## Entry 11
- ID: 5473
- Author: bhaveshtushar123
- Created At: 2026-05-04T18:52:26Z

### Content

today was mostly spent on the zine. It was a bit tiring, but it came together slowly. I worked on improving the page by adding a proper background, so it doesn’t look plain and lifeless anymore. Then I fixed all the arrows and changed them to elbowed lines. This made everything look much cleaner and less messy; I should have done it earlier.

I also added a random QR code as a placeholder just to see how the layout feels. I included some small graphics to make it resemble an actual product poster instead of just text and arrows. I spent some time aligning everything repeatedly, which was frustrating but necessary.

Apart from that, I watched two videos on learning schematics to understand wiring better for later. I’m still not perfect, but it makes more sense now.

Overall, it wasn't crazy progress, but the zine is definitely looking more real now.

ZINE-
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTE0MTksInB1ciI6ImJsb2JfaWQifX0=--741c2c1ec172194e26bff33ebcde26f7a3af1439/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/ce6fe15e-834e-4045-8668-9e022f48d653/video.mp4
- https://lookout.hackclub.com/api/media/66f07286-a9a8-4bb4-b993-480516237776/video.mp4

## Entry 12
- ID: 5880
- Author: bhaveshtushar123
- Created At: 2026-05-07T11:59:36Z

### Content

today was basically the final design wrap-up for modular navigator. i focused on initializing and properly organizing the github repo so the entire project finally feels complete instead of scattered files everywhere. i spent most of the time polishing the README and making sure every part of the project is documented clearly.

i added renders, exploded views, electronics diagrams, BOM details, build instructions, wiring explanations, and project overview sections so someone can actually understand the project without opening random files. i also fixed image paths, repo structure, and markdown formatting multiple times because github kept breaking things for no reason bruh.

after linking the wokwi simulation and checking all sections again, the repo finally started looking like an actual hardware project page instead of just a school submission. honestly kinda satisfying seeing months of cad, electronics, renders, and planning finally come together into one clean project yay.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTIzNzksInB1ciI6ImJsb2JfaWQifX0=--f1bac63f2ed5618538e4c2bdf6330d6b0b6acd1a/image.png)


### Recording Links

- https://lookout.hackclub.com/api/media/caa193bd-7192-4a94-b201-3c31cb57cca8/video.mp4
- https://lookout.hackclub.com/api/media/7c677bcb-d69a-49c9-9ae0-a382d7045f99/video.mp4
- https://lookout.hackclub.com/api/media/55e0987d-192f-4803-be52-8eae9077e8dd/video.mp4
