int sensorPin = A0;
int motorPin = 7;
int moistureValue = 0;
int threshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, HIGH);
}

void loop() {
  moistureValue = analogRead(sensorPin);
  
  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);

  if (moistureValue > threshold) {
    Serial.println("Soil is dry → Motor ON");
    digitalWrite(motorPin, LOW);
  } 
  else {
    Serial.println("Soil is wet → Motor OFF");
    digitalWrite(motorPin, HIGH);
  }

  delay(2000);
}
