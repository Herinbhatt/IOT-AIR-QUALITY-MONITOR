# IOT-AIR-QUALITY-MONITOR

**COMPANY**:CODETECH IT SOLUTIONS

**NAME**:Herin bhatt

**INTERN ID**:CT08RPQ

**DOMAIN**:Internet Of Things

**BATCH DURATION**:January 23rd, 2025 to April 15th, 2025

**MENTOR NAME**:Neela Santhosh Kumar

# TASK DESCRIPTION

This project describes an air quality monitor that utilizes an Arduino Nano microcontroller and a gas sensor to estimate a "pollution index." Based on this index, an LED will blink to provide a visual alert when the air quality is deemed to be above a selected pollution level.This project describes an air quality monitor that utilizes an Arduino Nano microcontroller and a gas sensor to estimate a "pollution index." Based on this index, an LED will blink to provide a visual alert when the air quality is deemed to be above a selected pollution level.

**primary goal is to create a simple air quality indicator that:**

- Reads data from a gas sensor.
- Calculates a rudimentary "pollution index" based on the sensor readings.
- Blinks an LED as a visual warning when the calculated pollution index exceeds a predefined threshold, indicating poor air 
  quality.
  
**Components:**

- Arduino Nano: The microcontroller responsible for reading sensor data, calculating the pollution index, implementing the 
  threshold logic, and controlling the LED blinking.

- Gas Sensor: A sensor capable of detecting the presence of certain air pollutants. For this project, we'll used MQ-2 sensor
  
- LED : A visual indicator that will blink when the pollution index exceeds the selected threshold. 

- Breadboard: For easy prototyping and connections.

- Jumper Wires: For making electrical connections.

- USB Cable: For programming the Arduino and providing power during development.

  ![Image](https://github.com/user-attachments/assets/1b8ada83-de5a-4b2b-975f-f5d34f5b79c2)

**circuit connnection**

- Gas Sensor: Connect the heater pins to 5V and GND, and the analog output pin (AOUT) to an Arduino analog input pin (e.g., 
  A0) via the load resistor connected to GND.

- LED: Connect the anode (longer leg) through a current-limiting resistor to an Arduino digital output pin (e.g., D2), and 
  the cathode (shorter leg) to GND.

- Arduino Nano: Connect to the power supply and the other components as described previously.

# OUTPUT OF THE TASK

- If the pollution Threshold is less than 500 then led will not blink
  
![Image](https://github.com/user-attachments/assets/aab56499-090d-48f2-a2cc-3156e7e985c3)

- If the pollution Threshold is more than 500 then led will blink

![Image](https://github.com/user-attachments/assets/13e46166-7708-462d-9499-6212c8f57983)


