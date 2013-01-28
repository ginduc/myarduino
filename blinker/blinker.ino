int led = 13;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  for (int ctr=0; ctr < 10; ctr++) {
    int x = 0;
    while (x < ctr) {
      blink();
      x++;
    }
    digitalWrite(led, LOW);
    delay(1000);
  }
}

void blink() {
  blink(200);
}

void blink(double duration) {
  digitalWrite(led, HIGH);
  delay(duration);
  digitalWrite(led, LOW);
  delay(duration);
}
