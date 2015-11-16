#define LEFT_PIN 1

int lastLeft = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Controller has started");
  pinMode(LEFT_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int currentLeft = digitalRead(LEFT_PIN);
  if (currentLeft != lastLeft) {
      Serial.print("Left pin: ");
      Serial.println(currentLeft);
      lastLeft = currentLeft;
  }
}
