#define sensorDigital A0
#define Motor 9
#define buzzer 8
#define motorOnOff A1
#define analogoutput A3
float value=0;
void setup() {
  Serial.begin(9600);
  pinMode(sensorDigital, INPUT);
  pinMode(Motor, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motorOnOff, OUTPUT);
  // pinMode(analogoutput, INPUT);
  delay(10000);
}
void loop() {
  bool digital = digitalRead(sensorDigital);
  int analog = digitalRead(motorOnOff);
  value = analogRead(analogoutput);
  Serial.print("Alcohol value: ");
  Serial.println(value);
  if (digital == 0) {
    digitalWrite(Motor, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(motorOnOff, LOW);
  } else {
    digitalWrite(Motor, LOW);
    digitalWrite(buzzer, HIGH);
    digitalWrite(motorOnOff, HIGH);
  }
}