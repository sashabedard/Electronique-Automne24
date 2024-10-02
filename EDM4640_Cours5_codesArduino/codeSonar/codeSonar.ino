const int TrigPin = 12;
const int EchoPin = 11;
float distance; 

#include <RunningMedian.h>

RunningMedian signalCapteur = RunningMedian(50);

void setup()
{
  Serial.begin(57600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);

  digitalWrite(TrigPin, LOW); 
}

void loop()
{
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  
  distance = pulseIn(EchoPin, HIGH) / 58.8;  //echo converti en cm

  signalCapteur.add( int(distance) );
  long m = signalCapteur.getMedian();
  long a = signalCapteur.getAverage();  
                                         
  Serial.print(distance);
  Serial.print(" ");
  Serial.print(m);
  Serial.print(" ");
  Serial.println(a); 
  delay(50);
}
