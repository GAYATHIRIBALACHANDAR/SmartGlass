#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED display size
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Temporary buffer for received Bluetooth data
String receivedText = "";

void setup() {
  Serial.begin(9600); // Bluetooth module communicates at 9600 bps

  // Initialize OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    // OLED not found
    Serial.println(F("SSD1306 allocation failed"));
    while (true); // Infinite loop
  }

  // Clear the display
  display.clearDisplay();
  display.setTextSize(1);      // Smallest text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Waiting for data...");
  display.display();
}

void loop() {
  // Check if data is available from HC-05
  while (Serial.available()) {
    char incomingChar = Serial.read();
    if (incomingChar == '\n') {
      // End of message, display it
      display.clearDisplay();
      display.setCursor(0, 0);
      display.println(receivedText);
      display.display();
      receivedText = ""; // Reset buffer
    } else {
      receivedText += incomingChar; // Append to string
    }
  }
}
