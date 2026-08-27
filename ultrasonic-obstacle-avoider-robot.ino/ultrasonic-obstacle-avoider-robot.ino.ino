// Arduino Obstacle Avoider robot using HC - 05 Ultrasonic Sensor
// Connections
// Trigger pin -> 9
// Echo Pin -> 10
// Left Motor Pin 1 -> 11
// Left Motor Pin 2 -> 12
// Right Motor Pin 1 -> 13
// Right Motor Pin 2 -> 8

const int trigPin = 9;
const int echoPin = 10;
const int leftMotor1 = 11;
const int leftMotor2 = 12;
const int rightMotor2 = 13;
const int rightMotor1 = 8;

void setup() {
  Serial.begin(9600); 
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
}

void forward() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void backward() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void right() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void left() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void loop() {
  

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Distance:  ");
  Serial.print(distance);
  Serial.println(" cm");


  if (distance < 15) {
    right();
  } 
  else{
    forward();
  }

  delay(500); 
}
