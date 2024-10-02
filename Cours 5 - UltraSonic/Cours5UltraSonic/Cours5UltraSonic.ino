#include <RunningMedian.h>

RunningMedian signalCapteur = RunningMedian(30);
const int trigPin = 12;
const int echoPin = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(trigPin, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, 1);
  delayMicroseconds(10);
  digitalWrite(trigPin, 0);

  float distance = pulseIn(echoPin, 1) / 58.8;

  signalCapteur.add(int(distance));
  long a = signalCapteur.getAverage();
  long m = signalCapteur.getMedian();

  Serial.print(distance);
  Serial.print(" ");
  Serial.print(m);
  Serial.print(" ");
  Serial.println(a);
  delay(50);
}
