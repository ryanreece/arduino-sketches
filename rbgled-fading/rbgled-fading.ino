int ledPins[3] = { 3, 5, 6 };

void setup()  { 
  for(int i = 0; i <= sizeof(ledPins); ++i) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()  {
  for(int x = 0; x <= 50; x++) {
    int q = rand() % 3;
    int r = rand() % 3;
    int s = rand() % 3;
    // fade in from min to max in increments of 5 points:
    for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPins[q], fadeValue);   
      analogWrite(ledPins[r], fadeValue);
      analogWrite(ledPins[s], fadeValue);
      delay(x);                            
    }
    delay(x * x);
    // fade out from max to min in increments of 5 points:
    for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
      // sets the value (range from 0 to 255):
      analogWrite(ledPins[q], fadeValue);
      analogWrite(ledPins[r], fadeValue);
      analogWrite(ledPins[s], fadeValue);  
      delay(x);
    }
  }
}


