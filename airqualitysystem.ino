
const int gasSensorPin = A5;

const int airqualitylevel = 500; 

const int ledPin = 2; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  int sensorValue = analogRead(gasSensorPin);

  if (sensorValue > airqualitylevel) {
    digitalWrite(ledPin, HIGH); 
  } else {

    digitalWrite(ledPin, LOW);  
  }

  delay(1000);
}