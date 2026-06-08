//Define LED pins
const int redLed = 11;
const int yellowLed = 10;
const int GreenLed =9;

void setup() {
  // Set all LED pins as outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  
}

void loop() {
  //Green light for 5 secomnds
  digitalWrite(GreenLed, HIGH);
  delay(5000);
  digitalWrite(GreenLed, LOW);

  //Yellow light for 2 seconds
  digitalWrite(yellowLed, HIGH);
  delay(2000);
   digitalWrite(yellowLed, LOW);

 //Yellow light for 5 seconds
  digitalWrite(redLed, HIGH);
  delay(5000);
   digitalWrite(redLed, LOW);
  
}
