int x;

void setup() {
  for(x = 2; x<= 13; x++) {
    pinMode(x, OUTPUT);
  }
  resetAllPins();
}

void resetAllPins() {
  for(x = 2; x<= 13; x++) {
    digitalWrite(x, HIGH);
  }
}

void loop() {
  for(x = 10; x <= 50; x++) {
    digitalWrite(9, LOW);
    delay(x * x);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    for(x = 5; x <= 13; x++) {
      digitalWrite(x, LOW);
    }
    digitalWrite(9, HIGH);
    delay(x * x);
    resetAllPins();
  }
  
}

void on () {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}

void off() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void fun() {
  for(x = 10; x<= 11; x++) {
    digitalWrite(2, HIGH);
    digitalWrite(5, LOW);
    delay(100 + x);
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
    delay(100 + x);
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
    delay(100 + x);
    digitalWrite(8, LOW);
    delay(100 + x);
    digitalWrite(9, LOW);
    delay(100 + x);
    digitalWrite(10, LOW);
    delay(100 + x);
    digitalWrite(11, LOW);
    delay(100 + x);
    digitalWrite(12, LOW);
    delay(100 + x);
    digitalWrite(13, LOW);
    delay(x);
    digitalWrite(4, LOW);
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(11, HIGH);
    delay(x);
  }
  
  resetAllPins();
}
