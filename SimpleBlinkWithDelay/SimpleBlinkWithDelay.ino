uint8_t led               = 13;
unsigned long onDuration  = 500;
unsigned long offDuration = 500;

void setup() {
 pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(onDuration);
  digitalWrite(led, LOW);
  delay(offDuration);
}