// C++ code
//
// Blink LED on Digital Pin 3

const int ledPin = 3;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on
  delay(1000);                // Wait 1 second

  digitalWrite(ledPin, LOW);  // Turn LED off
  delay(1000);                // Wait 1 second
}