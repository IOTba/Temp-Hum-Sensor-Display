#include <Wire.h>
#include <Adafruit_AHTX0.h>
#include <U8g2lib.h>

// Initialize AHT10 or AHT25 sensor
Adafruit_AHTX0 aht;

// Initialize SH1106 OLED using I2C
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(115200);
  Wire.begin();  // SDA = 21, SCL = 22 by default on ESP32

  // Initialize display
  u8g2.begin();
  u8g2.setFont(u8g2_font_ncenB08_tr);

  // Initialize sensor
  if (!aht.begin()) {
    Serial.println("Could not find AHT10/AHT25 sensor. Check wiring.");
    while (1) delay(10);
  } else {
    Serial.println("AHT10/AHT25 sensor detected successfully.");
  }
}

void loop() {
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp); // Read values

  // Output to serial monitor
  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.print(" °C\tHumidity: ");
  Serial.print(humidity.relative_humidity);
  Serial.println(" %");

  // Display on OLED
  u8g2.clearBuffer();
  u8g2.setCursor(0, 20);
  u8g2.print("Temp: ");
  u8g2.print(temp.temperature, 1);
  u8g2.print(" C");

  u8g2.setCursor(0, 40);
  u8g2.print("Humidity: ");
  u8g2.print(humidity.relative_humidity, 1);
  u8g2.print(" %");

  u8g2.sendBuffer();

  delay(2000); // Wait 2 seconds before next update
}
