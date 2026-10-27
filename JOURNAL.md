# PROJECT DEVELOPMENT JOURNAL

**Project Name:** Smart Kitchen LPG Gas Leakage Detection and Safety System
**Developed By:** RITIK PRAJAPAT
**Class:** 9th
**Total Time Logged:** 15 Hours

---

## STEP 1: PROJECT PLANNING

Time Spent: 2 Hours

Activities Performed:

1. Identified the problem of LPG gas leakage in kitchens.
2. Studied the risks associated with gas leakage.
3. Planned an automatic gas detection and alert system.
4. Selected the components required for the project.
5. Prepared the basic working principle of the system.

Time Log:

- Identifying the problem: 30 minutes
- Planning the working principle: 45 minutes
- Preparing the component list: 45 minutes

Outcome: A clear project plan was prepared, and the main objectives of the system were identified.
<img width="1280" height="720" alt="1000035025" src="https://github.com/user-attachments/assets/934e7cb3-6598-424c-b2fc-6e689af1e84b" />

---

## STEP 2: COLLECTING COMPONENTS

Time Spent: 3 Hours

Activities Performed:

1. Collected the Arduino Uno and MQ-2 gas sensor.
2. Arranged the OLED display, servo motor, relay module, buzzer, and red LED.
3. Collected the required jumper wires and accessories.
4. Checked the components for visible damage.
5. Studied the function of each component.

Time Log:

- Researching components: 45 minutes
- Collecting and arranging components: 1 hour 15 minutes
- Checking components: 1 hour

Outcome: The required components were collected, identified, and checked before assembly.
<img width="1472" height="3264" alt="1000035180" src="https://github.com/user-attachments/assets/d6e0f72b-a503-4f33-a85f-e4d704942863" />
<img width="1472" height="3264" alt="1000035182" src="https://github.com/user-attachments/assets/31de0a4c-5f84-49b8-85db-e61624d16bf1" />
<img width="3264" height="1472" alt="1000035176" src="https://github.com/user-attachments/assets/12a84c11-6a26-4bba-84dd-f0b8ebf2568b" />
<img width="1472" height="3264" alt="1000035177" src="https://github.com/user-attachments/assets/32c94fe3-1620-4caa-bd85-ab06e944c41e" />
<img width="3264" height="1472" alt="1000035174" src="https://github.com/user-attachments/assets/c630eef8-4caf-4a9f-82d1-0743e49d2056" />
<img width="3264" height="1472" alt="1000035175" src="https://github.com/user-attachments/assets/e3dd6a1e-6dd8-46e2-b2e8-a90b2e6051f5" />
<img width="1472" height="3264" alt="1000035178" src="https://github.com/user-attachments/assets/a668b8c1-f11f-4d44-ab9f-e48363391a82" />
<img width="1472" height="3264" alt="1000035179" src="https://github.com/user-attachments/assets/4ecaa5ed-cfd4-462e-a8cf-f2ada248107c" />

---

## STEP 3: PROPER WIRING

Time Spent: 4 Hours

Activities Performed:

1. Planned the pin connections for the Arduino Uno.
2. Connected the MQ-2 sensor to the Arduino.
3. Connected the OLED display using I2C communication.
4. Connected the red LED and buzzer to their assigned pins.
5. Connected the servo motor signal wire.
6. Inspected the power supply and ground connections.
7. Checked the wiring before powering the circuit.

Time Log:

- Planning the pin connections: 45 minutes
- Connecting the components: 1 hour 45 minutes
- Checking and correcting wiring: 1 hour
- Initial circuit inspection: 30 minutes

Outcome: The circuit was assembled and inspected to identify wiring errors.
<img width="3264" height="1472" alt="1000034638" src="https://github.com/user-attachments/assets/6ba51075-b4ba-40a0-8e6b-1a4e2fb121d4" />
<img width="1080" height="1440" alt="1000031225" src="https://github.com/user-attachments/assets/c879a2d8-1d44-44ac-ad5e-590826a34420" />
<img width="1080" height="1440" alt="1000031220" src="https://github.com/user-attachments/assets/badbd15a-f5d6-4c58-8364-398affc37ebf" />

---

## STEP 4: ARDUINO PROGRAMMING

Time Spent: 4 Hours

Activities Performed:

1. Prepared the Arduino program for the project.
2. Configured the input and output pins.
3. Programmed the OLED startup message to display "DEVELOPED BY RITIK PRAJAPAT" for five seconds.
4. Added the gas detection threshold.
5. Programmed the OLED to display "SAFE" when the sensor reading was below the configured threshold.
6. Added the "KITCHEN ALERT" message for abnormal gas readings.
7. Programmed the red LED, buzzer, and servo motor responses.
8. Reviewed the code and checked for compilation errors.

Time Log:

- Writing the initial code: 1 hour 30 minutes
- Programming the OLED messages: 1 hour
- Adding the alert logic: 1 hour
- Reviewing and correcting code: 30 minutes

Outcome: The Arduino program was prepared to process sensor readings and control the alert components.
<img width="720" height="1600" alt="1000031149" src="https://github.com/user-attachments/assets/b8307ba0-ea8d-439c-8eb1-0455004623a8" />
<img width="720" height="1600" alt="1000034842" src="https://github.com/user-attachments/assets/1dda85be-1988-4160-8079-cb59a8f98ed3" />
<img width="720" height="1600" alt="1000031156" src="https://github.com/user-attachments/assets/81cdf4a3-a314-42e1-a1c7-4b0e1ba365cb" />
<img width="576" height="1280" alt="1000034825" src="https://github.com/user-attachments/assets/f996f044-dba1-420d-99e2-e94b9b57f20c" />
<img width="720" height="1600" alt="1000031126" src="https://github.com/user-attachments/assets/45a6554c-b237-41a3-b4a1-b2a16daaac81" />
<img width="720" height="1600" alt="1000031152" src="https://github.com/user-attachments/assets/15493fa0-e476-4889-843c-4267f5de49ff" />
<img width="720" height="1600" alt="1000031153" src="https://github.com/user-attachments/assets/f31ba43f-962f-43bf-b09d-20b2b19660c4" />
<img width="720" height="1600" alt="1000031151" src="https://github.com/user-attachments/assets/539da1a6-a8aa-4292-8f2e-33e487b060e9" />

---

## STEP 5: FINAL CHECKING AND TESTING

Time Spent: 2 Hours

Activities Performed:

1. Inspected all circuit connections.
2. Powered on the Arduino and checked the OLED startup message.
3. Checked the SAFE display under normal test conditions.
4. Tested the sensor using a safe testing method.
5. Observed the red LED, buzzer, and servo motor responses.
6. Recorded the test observations.
7. Identified possible improvements to the system.

Time Log:

- Initial power-on check: 30 minutes
- OLED and sensor testing: 45 minutes
- Checking the LED, buzzer, and servo: 30 minutes
- Recording observations: 15 minutes

Outcome: The system was inspected and tested, and the observations were recorded.
<img width="1472" height="3264" alt="1000035215" src="https://github.com/user-attachments/assets/d57ce9d7-eaaa-4a54-9dc3-64480c319d5c" />
<img width="1472" height="3264" alt="1000035214" src="https://github.com/user-attachments/assets/79f70131-3c62-4a60-bf0e-21283d955778" />

---
