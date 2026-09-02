const int negative_motor1=13;
const int positive_motor1=12;
const int negative_motor2=11;
const int positive_motor2=10;

void forward() { 
  digitalWrite(negative_motor1, LOW);
  digitalWrite(negative_motor2, HIGH);
  digitalWrite(positive_motor1, HIGH);
  digitalWrite(positive_motor2, LOW);
}

void backward() { 
  digitalWrite(negative_motor1, HIGH);
  digitalWrite(negative_motor2, HIGH);
  digitalWrite(positive_motor1, LOW);
  digitalWrite(positive_motor2, LOW);
}

void left() { 
  digitalWrite(negative_motor1, LOW);
  digitalWrite(negative_motor2, HIGH);
  digitalWrite(positive_motor1, LOW);
  digitalWrite(positive_motor2, HIGH);
}

void right() {
  digitalWrite(negative_motor1, HIGH);
  digitalWrite(negative_motor2, LOW);
  digitalWrite(positive_motor1, HIGH);
  digitalWrite(positive_motor2, LOW);
}

void setup() {
  pinMode(negative_motor1, OUTPUT);
  pinMode(negative_motor2, OUTPUT);
  pinMode(positive_motor1, OUTPUT);
  pinMode(positive_motor2, OUTPUT);
}

void loop() {
  forward();
}
