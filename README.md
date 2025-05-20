## Temperature and humidity display  
This project demonstrates how to read temperature and humidity data using an AHT10 or AHT25 sensor and display the values on a 128x64 SH1106 OLED screen, using an ESP32 microcontroller.
  
The sensor and the display are both connected via the I2C protocol, allowing for a simple and efficient setup. The temperature (in Celsius) and humidity (in percentage) are updated every 2 seconds and displayed clearly on the screen using the U8g2 graphics library.
  
### **Features**  
Uses ESP32 with I2C communication  
Supports AHT10 or AHT25 temperature and humidity sensor  
Displays data on a 128x64 SH1106 OLED display  
Refreshes data every 2 seconds  
Clean and readable interface using the U8g2 library  
  
### **Hardware Requirements**  
ESP32 Dev Board  
AHT10 or AHT25 sensor  
SH1106 128x64 OLED display (I2C version)  
Jumper wires  
  
### **Libraries Used**  
Adafruit_Sensor  
Adafruit_AHTX0  
U8g2  

![sketch](https://github.com/user-attachments/assets/22e579d5-b7a6-4deb-9e6b-6b35c6695a7a)

| Component | ESP32 Pin                            |
| --------- | ------------------------------------ |
| SDA       | GPIO 21                              |
| SCL       | GPIO 22                              |
| VCC       | 3.3V or 5V (check your module specs) |
| GND       | GND                                  |

[View Arduino code](IOTba/temphumsensor.ino)
