# CNC-pen-plotter
A multi axes (XY) CNC pen plotter machine.


<p align="middle">
  <img src="/images/Drawing_close.gif" alt="Drawing with the CNC machine" height=200>

  <img src="/images/img1.jpg" alt="Complete view of the CNC assembly" height=200>
</p>


## 1. Introduction
The following repository holds the code, schematics and hardware needed to build a simple two linear axes plotter controlled with an Arduino and a CNC shield. 

The X axis is controlled by two Nema 17 stepper motors and the Y axis is controlled by another Nema 17 stepper motor.

The commands are sent via the “Universal GCode sender” and the GCode can be generated using any slicer/CAM software (Inkscape, Fusion360,...).

### 2. Preparation
### 2.1 Software
Install the GRBL into your Arduino. Find [here](https://arduinoboardproject.com/en/how-to-install-grbl-on-arduino-uno-with-the-arduino-ide-software/) some useful instructions on how to do this.

* Download and install “Universal Gcode Sender” for sending Gcode commands to the Arduino. You can download this program [here](https://winder.github.io/ugs_website/).
* Open Universal Gcode Sender and connect to the Arduino.
* Make sure that the belts are not connected.
* Test each motor’s rotation direction by sending the G0 X0 or G0 Y0 command. Change the wiring if needed to make the motors work as intended.
* Load a Gcode file. Make sure that the Gcode won’t make your CNC collide with your borders.
* Run the Gcode file. 

### 2.2. Electronics
Before proceeding with the electronics, I really recommend checking that all the components work properly and are correctly setup (pay special attention to A4988 modules, as the need to be tuned before being used).

After ensuring that all the components work properly follow next diagram to setup your electronics. (Don't forget to shortcircuit the X.STEPS/DIR pins)

<p align="middle">
  <img src="/images/electronic_schematics.jpg" alt="Schematics for electronics assembly" width=500>
</p>

### 2.3. Hardware
The assembly process is quite straightforward:

1. Assembly the pulleys and pulley holders (3 in total).
2. Assembly the pulleys, the motors and the motor holders (3 in total).
3. Assembly the X shafts and the X shaft holders (2 in total).
4. Assembly the movable left side base.

<p align="middle">
  <img src="/images/assembly_left_base.png" alt="Assembly of the movable left base" width=400>
</p>

5. Assembly the movable right side base.

<p align="middle">
  <img src="/images/assembly_middle_base.png" alt="Assembly of the movable middle base" width=400>
</p>

6. Assembly the movable middle base.

<p align="middle">
  <img src="/images/assembly_right_base.png" alt="Assembly of the movable right base" width=400>
</p>

7. Assembly all the bases and shafts accordingly.


<p align="middle">
  <img src="/images/img3.jpg" alt="Complete assembly photo 1" height=200>

  <img src="/images/img4.jpg" alt="Complete assembly photo 2" height=200>
  
  <img src="/images/img5.jpg" alt="Complete assembly photo 3" height=200>
</p>

8. Place the belts and makes sure to tighten them up.

## Requirements
### Software
You should install/have the following software in order to control your CNC machine:

* [Universal Gcode Sender](https://winder.github.io/ugs_website/)
* [Arduino IDE](https://www.arduino.cc/en/main/software)
* [Inkscape](https://inkscape.org/)*
* [StippleGen](https://www.evilmadscientist.com/2012/stipplegen2/)*

*(Not necessary but recommended)

### Components
In order to construct this project, you will need the following components:

* Microcontroller: Arduino UNO
* CNC shield: CNC shield V3.0
* Stepper motor driver: A4988
* Power supply: Voltage: 12V Amperage: 5A
* Pulley: Geared pulleys: 5mm, 20 teeth
* Transmission belt: GT2, 5mm
* Linear bearings: 8mm
* Shafts: 8mm, 500mm (2 pcs) and 250mm (2 pcs)
* Shaft holders: 8mm
* Fan: 12V
