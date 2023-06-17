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
  /*Move forward for 2 seconds with pwm value to 75*/
  moveForward(75, 2000);
  stopMotors(1000);
  /*Move backward for 2 seconds with pwm value to 75*/
  moveBackward(75, 2000);
  stopMotors(1000);

  /*Move forward for 2 seconds with pwm value to 130*/
  moveForward(130, 2000);
  stopMotors(1000);
  /*Move backward for 2 seconds with pwm value to 130*/
  moveBackward(130, 2000);
  stopMotors(1000);

  /*Move forward for 2 seconds with pwm value to 255*/
  moveForward(255, 2000);
  stopMotors(1000);
  /*Move backward for 2 seconds with pwm value to 255*/
  moveBackward(255, 2000);
  stopMotors(1000);
}

void moveForward(int dutyCycle, int delayTime)
{
  /*Backward direction for right motor*/
  analogWrite(MotRN, dutyCycle);
  digitalWrite(MotRP, LOW);
  /*Backward direction for right motor*/
  analogWrite(MotLP, dutyCycle);
  digitalWrite(MotLN, LOW);
  delay(delayTime);
}

void moveBackward(int dutyCycle, int delayTime)
{
  /*Forward direction for right motor*/
  analogWrite(MotRP, dutyCycle);
  digitalWrite(MotRN, LOW);
  /*Forward direction for left motor*/
  analogWrite(MotLN, dutyCycle);
  digitalWrite(MotLP, LOW);
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
