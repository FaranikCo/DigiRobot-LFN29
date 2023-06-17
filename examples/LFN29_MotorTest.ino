#define MotRP 3
#define MotRN 5
#define MotLP 6
#define MotLN 9

void setup()
{
  pinMode(MotRP, OUTPUT);
  pinMode(MotRN, OUTPUT);
  pinMode(MotLP, OUTPUT);
  pinMode(MotLN, OUTPUT);
}

void loop()
{
  moveForward(2000);
  stopMotors(1000);
  moveBackward(2000);
  stopMotors(1000);
}

void moveForward(int delayTime)
{
  /*Forward direction for right motor*/
  digitalWrite(MotRP, LOW);
  digitalWrite(MotRN, HIGH);
  /*Forward direction for left motor*/
  digitalWrite(MotLP, HIGH);
  digitalWrite(MotLN, LOW);
  delay(delayTime);
}

void moveBackward(int delayTime)
{
  /*Backward direction for right motor*/
  digitalWrite(MotRP, HIGH);
  digitalWrite(MotRN, LOW);
  /*Backward direction for left motor*/
  digitalWrite(MotLP, LOW);
  digitalWrite(MotLN, HIGH);
  delay(delayTime);
}

void stopMotors(int delayTime)
{
  /*Stop right motor*/
  digitalWrite(MotRP, LOW);
  digitalWrite(MotRN, LOW);
  /*Stop left motor*/
  digitalWrite(MotLP, LOW);
  digitalWrite(MotLN, LOW);
  delay(delayTime);
}
