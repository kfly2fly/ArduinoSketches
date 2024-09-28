//www.elegoo.com
//2016.12.08

const int ledPin = 5;
const int buttonApin = 9;
const int buttonBpin = 8;

// byte leds = 0;
int ledActive = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
  // if (digitalRead(buttonApin) == LOW) {  //This looping is happening too fast for me to figure out how to do it with onl1 1 button
  //   if (ledActive) {
  //     digitalWrite(ledPin, LOW);
  //     ledActive = 0;
  //   } else {
  //     digitalWrite(ledPin, HIGH);
  //     ledActive = 1;
  //   }
  // }
  if (digitalRead(buttonApin) == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
