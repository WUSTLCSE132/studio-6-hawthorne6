const int buttonPin = 2;

int count = 0;
int buttonState;
int lastButtonState = LOW;


unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 100;


void buttonPressed() {
  if(digitalRead(buttonPin) == LOW){
   if ((millis() - lastDebounceTime) > debounceDelay) {
     Serial.println("pressed");
   }
  }
  lastDebounceTime = millis();
   
}
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, CHANGE);
}

void loop () {
  //Serial.println(count);
  }
