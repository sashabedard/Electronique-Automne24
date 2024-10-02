#include <RunningMedian.h>

RunningMedian signalCapteur = RunningMedian(15);

void setup() 
{
  Serial.begin(57600);
}

void loop() 
{ 
  int x = analogRead(A0);
  
  signalCapteur.add(x);
  long m = signalCapteur.getMedian();
  long a = signalCapteur.getAverage();
   
  Serial.print(x);
  Serial.print(" ");
  Serial.print(a);
  Serial.print(" ");
  Serial.println(m);
  delay(100);
}
