const int ledpins[] = {2 ,3 ,4, 5, 6}; // Array of LED pins
const int numLeds = 5;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledpins[i], OUTPUT);
  }
}
void loop() {
  // pattern 2: LEDs Light up sequentially
for (int i = 0; i < numLeds; i++) {
  digitalWrite(ledpins[i], HIGH);
  delay(100);

  digitalWrite(ledpins[ numLeds - 1 - i], LOW);
  delay(150);
}

  delay(500); // short pause between patterns

// pattern 2: LEDs light up from ends to center 
for (int i = 0; i  < numLeds / 2; i++) {
  digitalWrite(ledpins[i], HIGH);
  digitalWrite(ledpins[numLeds - 1 - i], LOW);
  delay(150);
}
for (int i = 0; i < numLeds / 2; i++) {
  digitalWrite(ledpins[i], LOW);
  digitalWrite(ledpins[numLeds - 1 - i], LOW);
  delay(150);

}
if ( numLeds % 2 != 0) { // if odd number of LEDs, turn off middle one
digitalWrite(ledpins[numLeds / 2 ], LOW);
}
delay(1000); // Longer pause before repeating all patterns
}