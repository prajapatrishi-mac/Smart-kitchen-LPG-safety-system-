# Pin Connections

Disconnect power before wiring.

| Component pin | Arduino Uno |
|---|---|
| MQ-2 VCC | 5V |
| MQ-2 GND | GND |
| MQ-2 AO | A0 |
| OLED SDA | A4 |
| OLED SCK/SCL | A5 |
| OLED GND | GND |
| OLED VDD | Supply voltage supported by your exact OLED module; check its specification before using 5V |
| Active buzzer + | D3, only if its current is within the pin limit; otherwise use a driver |
| Active buzzer - | GND |
| Red LED anode | D4 through 220-ohm resistor |
| Red LED cathode | GND |
| Servo signal | D9 |
| Servo power | Suitable regulated supply for your servo |
| Servo GND | Common GND with Arduino |

The sketch does not operate a relay or exhaust fan. Do not use an ordinary fan as an automatic response to a suspected LPG leak. A real kitchen requires certified gas detection and appropriately rated equipment.
