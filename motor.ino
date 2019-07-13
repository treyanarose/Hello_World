int pin1 = 8;
int pin2 = 9;

void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);

}

void loop() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  Serial.println("Forward!");
  delay(1000);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  Serial.println("Reverse!");
  delay(1000);
}
