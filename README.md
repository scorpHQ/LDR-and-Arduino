Introduction
---------------

Hi Everyone, This is my 1st Arduino's tutorial video. In this video i am going to show you how to use a LDR or Light Dependent resistor to turn on and off another circuit or a LED.

Wouldn’t it be really cool if whenever a room gets dark, a light bulb automatically turns ON and eliminates the darkness? In this very simple project, I am focusing on eliminating darkness. You can even use this as an emergency lighting system.

[![USING AN LDR SENSOR WITH ARDUINO](https://img.youtube.com/vi/1rltou-lzyQ/0.jpg)](https://www.youtube.com/watch?v=1rltou-lzyQ "USING AN LDR SENSOR WITH ARDUINO")


Step 1: Principle
-----------------
![Principle](https://cdn.instructables.com/FHC/DGCR/JCUUIW0P/FHCDGCRJCUUIW0P.MEDIUM.gif)
![Principle](https://cdn.instructables.com/FY4/D9FU/JCUUIW0O/FY4D9FUJCUUIW0O.SMALL.jpg)

The LDR is a special type of resistor which allows a lower voltage to pass through it (high resistance) whenever its dark and higher voltages to pass (low resistance) whenever there is a high intensity of light.

We are going to use a 10k resistor along with the LDR to create a voltage divider circuit. The varying resistance of the LDR is converted to a varying voltage that the analog pin of the Arduino will then be using in its logic.

Step 2: Harware Reqirement
--------------------------
![Harware Reqirement](https://cdn.instructables.com/FV9/K0NB/JCUUIW98/FV9K0NBJCUUIW98.MEDIUM.jpg)
