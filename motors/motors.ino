#define LEFT_MOTOR 1


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEFT_MOTOR, OUTPUT);
  digitalWrite(LEFT_MOTOR, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Left motor on");
  digitalWrite(LEFT_MOTOR, HIGH);
  delay(5000);
  Serial.println("Left motor off");
  digitalWrite(LEFT_MOTOR, LOW);
  delay(5000);
}
