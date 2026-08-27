// Arduino Obstacle Avoider robot using HC - 05 Ultrasonic Sensor

const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600); 
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Distance:  ")
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500); 
}
