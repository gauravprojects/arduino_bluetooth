#include <SoftwareSerial.h>
SoftwareSerial BT(0,1);
void setup()
{
  BT.begin(9600);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  char c;
  if(BT.available() > 0)
  {
    //I have tried c as byte also, but same garbage value.
    c = BT.read();
    //Also tried Serial.write(). Its just displaying ASCII value of that garbage characcter...
    Serial.println(c);
  }
 }

