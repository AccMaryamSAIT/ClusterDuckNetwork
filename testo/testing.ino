#include <Arduino.h>

void setup() {
    Serial.begin(115200); // Initialize serial communication at 115200 baud
    delay(2000); // Wait for serial monitor to initialize

    // Print a hello world message
    Serial.println("Hello, World!");
}

void loop() {
    // Your main code here
}
