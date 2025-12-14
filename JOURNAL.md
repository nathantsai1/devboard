time spent: 31.9h

## V1

## research + start devboard 1.5h
I've been looking for a way to do a custom devboard to leran more about the different parts that simple devboards use. In this project, I plan to utilize no code and use Arduino to program the chip. The goal is to make the blinking light experiment (just for simplicity of final goal).<br />
Today, I just toyed around and found a good tutorial to use. I learned to search for parts on LCSC based off the schematics of the official ESP32-WROOM dev board and plop them in the general vicinity of the sector. The main compenents have been placed down.
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM0OTgsInB1ciI6ImJsb2JfaWQifX0=--987db581dd3bc964e3f429561b58d0c38392ebe4/image.png)

## more schematics 1.7 h
I started putting more items onto the schematic. It's still not finished, but I do think that I have learned more about using the company's schematics as a helpful page and using their recommended setup to ensure my board wouldn't blow up. That was cool.
Through this project, I learned:
A decoupling capacitor stabilizes power by using a high-pass and a low-pass filter. These could be mathematically attributed to Fourier's series and Taylor's series. Additionally, they stabilize unstable power and reduce noise on a board. Awesome!
A transistor acts as a gate for both higher and lower power, allowing the source with higher power to flow only if the lower power allows it. I like my knowledge in E&M being applied.

Also I organized parts by purpose
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM4ODUsInB1ciI6ImJsb2JfaWQifX0=--688fcaa43c1f318723d0f14e7627650857ec1e6f/Screenshot%202025-11-23%20211850.png)

## pcb schem(cont.) 1h
This was really a really interesting time period
I learned about what noise is and how it can affect signals
I learned about over and undershooting and how that could be problematic towards USB UART communication, specifically using Income Series Termination.
I also added to my PCB
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM5MzIsInB1ciI6ImJsb2JfaWQifX0=--0ded0673bbd4d5acfc1f960499d8ce133392a7cb/image.png)

## Finished schems(hopefully) 2h
This was a quick ending. I rearranged the parts to form sections and make the plans easy to read, and reannotated all the component parts to make them easier to piece together
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTQxODYsInB1ciI6ImJsb2JfaWQifX0=--4a438e711f2246f66fe6f6bc478c54140e17ec3f/image.png)

## start pcb 1
Started PCB. EasyEDA is really annoying to use, especially since it doesn't "click" pieces into place very well and it doesn't intuitively make sense yet. Hopefully I'll figure it out soon!
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTQyMTEsInB1ciI6ImJsb2JfaWQifX0=--40cdf927fe41910ad5f9a850ced61b76d69987cf/image.png)

## Finished placing componenets onto PCB 3.5
Today was really fun! I spent a few hours placing components and learning more about how to place items more effectively than I'm used to.
This tutorial is teaching me to rely on searching up parts by myself and placing them organized way. The dev board in 3D form looks nice, though.
Also, I started routing, which was not fun
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTUzMTEsInB1ciI6ImJsb2JfaWQifX0=--9fba4644f3cb50a7496cd56ad6545a80aaad9f45/image.png)

## ReReReRouted the PCB 8h
I finished placing the components and doing a draft trace, which was fun.
Unfortunately, I spent a really long time rerouting the PCB multiple times because I forgot to change the track clearance minimum from 6mm to 10mm, so it took a long time to redo. The Vias also became a nuisance, so I spent extra time figuring out how to place those and the tracks so they all fit in the little board.
(forgot to upload this yesterday bc I went to sleep late and forgot to do it)
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTYxNjAsInB1ciI6ImJsb2JfaWQifX0=--5bc4e2f911734a2f0c3aeefe502f65f9ac2e79c1/image.png)

## Finish PCB 2h
I finished rewiring the traces (finally!) and changed the thickness to a thinner version. The power cables are now 21 mil thick.
I also added a panda and a Snorlax to the back, labeled the connections, and added copper polygons to some GND/PWR pins.
The board also went through a DFM check
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTcxMTgsInB1ciI6ImJsb2JfaWQifX0=--790686b069a4682dee2113e8427e370658ea690a/image.png)

## Finish PCB 3h
I finished rewiring the traces (finally!) and changed the thickness to a thinner version. The power cables are now 21 mil thick.
I also added a panda and a Snorlax to the back, labeled the connections, and added copper polygons to some GND/PWR pins.
The board also went through a DFM check. It should be ready as a prototype
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTk3ODYsInB1ciI6ImJsb2JfaWQifX0=--3b8c30cd4aff3426bd33c3223613367903ea6fe4/image.png)

## Changed some details 2h
redid README
added more pictures
added a "why did I make this?" section
added folders
PCB
src(pictures)
I also forgot to save edited PCB(add USBC instead of microUSB)
<br>![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MjA0OTYsInB1ciI6ImJsb2JfaWQifX0=--5a9b85953e73968c1a19a628ed74f54912ac2566/Screenshot%202025-12-07%20004514.png)

## changed USB-B to USB 2.0 (lot of work rerouting) 3h
uploaded files onto github
redesign project according to submission guidelines
Go find prices in JLCPSB and LCSC
![src\1-1.png](src\1-1.png)
![src\1-2.png](src\1-2.png)
![src\1-3.png](src\1-3.png)
![src\1-4.png](src\1-4.png)

c479086