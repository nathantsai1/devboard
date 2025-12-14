#define RED_LED 18

// not very complicated but it should still work

void start() {
    pinMode(RED_LED, OUTPUT);
}

void loop() {
    digitalWrite(RED_LED, HIGH);
    delay(5000);
    digitalWrite(RED_LED, LOW);
    delay(5000);
}