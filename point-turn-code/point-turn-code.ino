int botSpeed = 100;

void setup() {
  // setting PWM output pins for controlling dc motors
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600); // for debugging
}

void loop() {
  // give pwm signals to respective digital pins to perform point turn
  analogWrite(5,botSpeed); // turn left wheels clockwise
  analogWrite(6,botSpeed); // turn right wheels anticlockwise
}