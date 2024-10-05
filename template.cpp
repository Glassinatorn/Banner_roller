#include <Arduino.h>

#define LED_BUILTIN 2

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
    while (!Serial) {
        delay(100);
    }
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    serial.println("Led on");
    delay(1000);


    digitalWrite(LED_BUILTIN, LOW);
    serial.println("Led off");
    delay(1000);
}
