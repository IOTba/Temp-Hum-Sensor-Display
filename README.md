This project demonstrates how to read temperature and humidity data using an AHT10 or AHT25 sensor and display the values on a 128x64 SH1106 OLED screen, using an ESP32 microcontroller.

The sensor and the display are both connected via the I2C protocol, allowing for a simple and efficient setup. The temperature (in Celsius) and humidity (in percentage) are updated every 2 seconds and displayed clearly on the screen using the U8g2 graphics library.

Features
Uses ESP32 with I2C communication

Supports AHT10 or AHT25 temperature and humidity sensor

Displays data on a 128x64 SH1106 OLED display

Refreshes data every 2 seconds

Clean and readable interface using the U8g2 library

Hardware Requirements
ESP32 Dev Board

AHT10 or AHT25 sensor

SH1106 128x64 OLED display (I2C version)

Jumper wires

Libraries Used
Adafruit_Sensor

Adafruit_AHTX0

U8g2

