🔥 Smart Kitchen LPG Gas Leakage Detection and Safety System

📌 Project Overview

The Smart Kitchen LPG Gas Leakage Detection and Safety System is an Arduino-based project designed to demonstrate how gas leakage can be detected using an MQ-2 gas sensor.

When the sensor detects a gas level above the configured threshold, the system activates a buzzer and red LED, displays a warning on an OLED screen, and moves a servo motor to demonstrate an alert response.

The project aims to demonstrate the importance of gas-leak awareness and safety in kitchens.

«Important: This is an educational prototype, not a certified LPG safety device. Do not rely on it to protect people or property.»

---

🎯 Project Objectives

- Detect elevated gas or smoke levels using an MQ-2 sensor.
- Display system status on an OLED screen.
- Activate a buzzer when the sensor reading exceeds the configured threshold.
- Turn on a red LED to indicate an alert.
- Use a servo motor to demonstrate an automatic response.
- Learn about Arduino programming, sensors, and embedded systems.

---

🧰 Components Required

No.| Component| Purpose
1| Arduino Uno| Main controller
2| MQ-2 gas sensor module| Detects combustible gases and smoke
3| 0.96-inch I2C OLED display (128 × 64)| Displays status and warnings
4| Active buzzer| Provides an audible alert
5| Red LED| Visual alert indicator
6| 220 Ω resistor| Limits LED current
7| Servo motor| Demonstrates a mechanical response
8| Breadboard| Makes prototyping connections easier
9| Jumper wires| Connects the components
10| Suitable power supply| Powers the circuit and its components
<img width="1472" height="3264" alt="1000035180" src="https://github.com/user-attachments/assets/385e2813-f7ed-42c2-b8e9-e8362849120a" />
<img width="468" height="1040" alt="1000034590" src="https://github.com/user-attachments/assets/48555b1d-f3e8-4bb8-8d95-3d5bd29558fa" />
<img width="1472" height="3264" alt="1000035182" src="https://github.com/user-attachments/assets/25d94893-3a35-43fb-b92f-c51173d2a0de" />
<img width="3264" height="1472" alt="1000035176" src="https://github.com/user-attachments/assets/c6aad777-1071-4655-b858-d1630b37a641" />
<img width="1472" height="3264" alt="1000035177" src="https://github.com/user-attachments/assets/021e5efc-889a-4e8d-8e19-9444478fa30a" />
<img width="3264" height="1472" alt="1000035174" src="https://github.com/user-attachments/assets/e1f44616-6883-4ddc-86d3-3780d45d560d" />
<img width="3264" height="1472" alt="1000035175" src="https://github.com/user-attachments/assets/f784a3b5-34f3-4a47-942e-4c70b9af6e4f" />
<img width="1472" height="3264" alt="1000035178" src="https://github.com/user-attachments/assets/7f6912fc-0c52-416d-b0e1-79814430eea7" />
<img width="1472" height="3264" alt="1000035179" src="https://github.com/user-attachments/assets/b3c32afd-df66-4319-8ef7-5fa06507af66" />


---

🔌 Pin Connections

1. MQ-2 Gas Sensor

MQ-2 Pin| Arduino Uno
VCC| 5V
GND| GND
AO| A0
DO| Not connected

2. OLED Display

OLED Pin| Arduino Uno
VDD| Compatible supply voltage
GND| GND
SDA| A4
SCK / SCL| A5

Note: Check your specific OLED module's voltage requirements before connecting VDD.

3. Active Buzzer

Buzzer Pin| Arduino Uno
Positive (+)| D3
Negative (−)| GND

Ensure the buzzer's current requirements are suitable for the Arduino output; use a driver circuit if necessary.

4. Red LED

LED Connection| Arduino Uno
Anode (+), through a 220 Ω resistor| D4
Cathode (−)| GND

5. Servo Motor

Servo Wire| Connection
Signal| D9
Power| Suitable regulated supply
GND| Common ground with Arduino

Power warning: Do not assume the Arduino Uno's 5V pin can safely power the servo. Use an appropriate regulated supply and connect its ground to Arduino GND.

---

⚙️ Working Principle

Step 1: System Startup

When the Arduino starts, the OLED displays the developer message:

"DEVELOPED BY RITIK PRAJAPAT"

The startup message remains visible for approximately five seconds.

Step 2: Sensor Initialization

The system begins reading the analog output of the MQ-2 sensor.

Step 3: Safe-State Display

When the sensor reading is below the configured threshold, the OLED displays the safe status and sensor reading.

Step 4: Gas-Alert Demonstration

When the reading exceeds the configured threshold:

- The OLED displays a gas warning.
- The buzzer activates.
- The red LED turns on.
- The servo moves to approximately 90 degrees.

Step 5: Return to Safe State

When the reading falls below the reset level, the system returns to its safe-state behavior.

---

💻 Software Requirements

- Arduino IDE or a compatible Arduino programming application
- Arduino Uno board support
- "Wire.h" library, normally included with the Arduino environment
- "Servo.h" library, available through the Arduino environment

The OLED implementation in the supplied sketch uses a minimal custom display driver rather than requiring the Adafruit SSD1306 and Adafruit GFX libraries.<img width="720" height="1600" alt="1000035228" src="https://github.com/user-attachments/assets/e9c9f2bc-06c3-4895-8541-c3f04d2632bc" />
<img width="720" height="1600" alt="1000035229" src="https://github.com/user-attachments/assets/30786125-82c7-4777-be3f-b3ab09195766" />
<img width="720" height="1600" alt="1000034842" src="https://github.com/user-attachments/assets/666e41ea-654e-4eb1-9ba1-1733822066bf" />
<img width="720" height="1600" alt="1000035226" src="https://github.com/user-attachments/assets/7a2f7211-c037-40ee-a647-4241d394f766" />
<img width="720" height="1600" alt="1000035227" src="https://github.com/user-attachments/assets/c0dcd853-f106-4dfc-8f44-42e797112742" />
<img width="720" height="1600" alt="1000031156" src="https://github.com/user-attachments/assets/909feea5-de15-4857-b9c1-8e16131cc05f" />
<img width="576" height="1280" alt="1000034825" src="https://github.com/user-attachments/assets/4939b3b0-090b-4927-8093-2e809e317c88" />
<img width="720" height="1600" alt="1000031152" src="https://github.com/user-attachments/assets/c79c6127-1efe-44eb-a080-7a2648a71a96" />
<img width="720" height="1600" alt="1000031153" src="https://github.com/user-attachments/assets/327c6b7c-b70d-4e48-86ae-16b1631e4405" />


---

🧪 Testing

For educational testing:

1. Check all wiring while the circuit is powered off.
2. Confirm that the OLED starts and displays the startup message.
3. Verify that the sensor produces readings.
4. Check that the LED and buzzer operate as expected.
5. Test the servo separately before integrating it.
6. Record sensor readings and verify that the configured threshold behaves as intended.

Safety: Do not release LPG from a cylinder, lighter, or other gas source to test the prototype. Do not test it in a kitchen containing combustible gas. Use a safe, controlled test method appropriate for the sensor, and follow the manufacturer's instructions.<img width="1472" height="3264" alt="1000035215" src="https://github.com/user-attachments/assets/e8843675-8257-434d-881d-f96df12835bd" />
<img width="1472" height="3264" alt="1000035214" src="https://github.com/user-attachments/assets/e54259e8-d755-415f-b97a-5492e2cb4190" />


---

⚠️ Safety Limitations

- The MQ-2 is a general-purpose hobby sensor, not a certified LPG safety detector.
- Sensor readings vary with warm-up time, calibration, environment, and sensor condition.
- The threshold in the example code is a starting value and must not be treated as a reliable real-world safety limit.
- The prototype does not automatically operate an exhaust fan.
- Do not connect an ordinary fan or other potentially sparking electrical equipment to switch on automatically in response to a suspected LPG leak. Use certified gas-safety equipment and professional installation for real kitchens.
- If an LPG leak is suspected, avoid operating electrical switches or appliances, leave the area, and contact the appropriate gas emergency service from a safe location.

---

🚀 Future Improvements

Possible improvements for future versions include:

- Sensor calibration and more reliable threshold handling
- A clearer OLED interface
- Separate sensor-status and alert indicators
- A documented enclosure and circuit layout
- Testing records and project photographs
- Integration with certified safety equipment by a qualified professional

---

📜 License

You may add an open-source license, such as the MIT License, if you want others to reuse and modify your project. Review the license terms before adding it.

---

⭐ Acknowledgment

This project is intended to encourage learning about electronics, automation, and the importance of gas safety.

If you find this educational project useful, consider starring the repository on GitHub.
