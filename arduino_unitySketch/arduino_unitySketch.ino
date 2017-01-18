int analogValue1 = 0;
int analogValue2 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogValue1 = analogRead(A0);
  analogValue2 = analogRead(A1);
  Serial.print(analogValue1);
  Serial.print(",");
  Serial.println(analogValue2);
  delay(20);
}
