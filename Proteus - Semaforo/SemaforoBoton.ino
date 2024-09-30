#define LEDRojo 8
#define LEDAmarillo 7
#define LEDVerde 6
#define buttonPin 9
#define LEDPeatonRojo 4
#define LEDPeatonVerde 3
int lastButtonState;
int currentButtonState;

void setup() {
  Serial.begin(9600);
  pinMode(LEDRojo, OUTPUT);
  pinMode(LEDAmarillo, OUTPUT);
  pinMode(LEDVerde, OUTPUT);
  pinMode(LEDPeatonVerde, OUTPUT);
  pinMode(LEDPeatonRojo, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  
  currentButtonState = digitalRead(buttonPin);
}

void loop() {
  currentButtonState = digitalRead(buttonPin);
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    digitalWrite(LEDRojo, LOW);
    digitalWrite(LEDAmarillo, HIGH);
    digitalWrite(LEDVerde, LOW);
    delay(500);
    digitalWrite(LEDRojo, HIGH);
    digitalWrite(LEDAmarillo, LOW);
    digitalWrite(LEDVerde, LOW);
    digitalWrite(LEDPeatonRojo, LOW);
    digitalWrite(LEDPeatonVerde, HIGH);
    delay(1000);
    digitalWrite(LEDRojo, LOW);
    digitalWrite(LEDAmarillo, HIGH);
    digitalWrite(LEDVerde, LOW);
    delay(500);
  } else {
        digitalWrite(LEDPeatonRojo, HIGH);
        digitalWrite(LEDPeatonVerde, LOW);
        digitalWrite(LEDRojo, LOW);
        digitalWrite(LEDAmarillo, LOW);
        digitalWrite(LEDVerde, HIGH);
        }
  lastButtonState = currentButtonState;
}