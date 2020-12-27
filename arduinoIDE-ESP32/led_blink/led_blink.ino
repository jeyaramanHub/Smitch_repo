
uint8_t ledPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello");
  digitalWrite(ledPin, HIGH);

  delay(100);

  Serial.print("Hello");
  digitalWrite(ledPin, LOW);

  delay(100);
}
