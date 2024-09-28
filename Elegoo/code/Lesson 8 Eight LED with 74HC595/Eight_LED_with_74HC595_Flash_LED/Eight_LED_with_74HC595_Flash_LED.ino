//www.elegoo.com
//2016.12.9 

const int tDelay = 200;
const int latchPin = 11;      // (11) ST_CP [RCK] on 74HC595
const int clockPin = 9;      // (9) SH_CP [SCK] on 74HC595
const int dataPin = 12;     // (12) DS [S1] on 74HC595
const int pwmPin = 6;

byte leds = 0;

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  pinMode(pwmPin, OUTPUT);

  analogWrite(pwmPin, 0);
}

void loop() 
{
  leds = 0;
  updateShiftRegister();
  delay(tDelay);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    // bitClear(leds, 4);
    updateShiftRegister();
    delay(tDelay);
  }
}

