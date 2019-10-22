const byte ledPin = 6; 
const byte interruptPin = 1;
int digPin = 5;

volatile byte state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(digPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
   digitalWrite(ledPin, state);//LAST STATE
   digitalWrite(digPin, HIGH);
   delay(1000);     
   digitalWrite(digPin, LOW); 
   delay(1000);
   digitalWrite(ledPin, HIGH);
  }

void blink() {
  state = !state;
  digitalWrite(ledPin, state);
  }
