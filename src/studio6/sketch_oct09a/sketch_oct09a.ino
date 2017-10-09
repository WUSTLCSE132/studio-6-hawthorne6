const int buttonPin = 2;
int numPressed = 0;

void buttonPressed() {
  Serial.println("Interrupt");
  numPressed++;
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

  // Interrupts can happen on "edges" of signals.  
  // Three edge types are supported: CHANGE, RISING, and FALLING 
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, RISING);
  Serial.begin(9600);
}

void loop() {
  //Serial.println(numPressed);
}
