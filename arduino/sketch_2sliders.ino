
int sensorValueA = 0;        // Potentiometer A value
int sensorValueB = 0;        // Potentiometer B value

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValueA = analogRead(7);
  sensorValueB = analogRead(6);
  
  Serial.print("a:");
  Serial.print(sensorValueA);
  
  Serial.print(";");
  
  Serial.print("b:");
  Serial.print(sensorValueB);
  
  delay(1000);                // waits for a second
}
