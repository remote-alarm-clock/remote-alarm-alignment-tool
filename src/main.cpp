/**
 * @brief Super einfaches Skript, dass die Farbe vom OLED auf hell setzt und so belässt.
 * 
 * Author: Aleksander Stepien - AS
*/

#include <Arduino.h>
#include <ESP_SSD1306.h>

ESP_SSD1306 display; 
#define OLED_RESET_PIN D0 // pin 15 -RESET digital signal

void setup()
{
    display.begin(SSD1306_SWITCHCAPVCC);
}

void loop()
{
    display.clearDisplay();
    display.invertDisplay(true);
    delay(500);
}