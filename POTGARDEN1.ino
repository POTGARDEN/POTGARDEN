Program Code

 int AC_WATER_PUMP = 13;
  int SENSOR = 8;
  int VAL;
  void setup()
{
  // put your setup code here, to run once:
  
  
    pinMode(13,OUTPUT);
    pinMode(8, INPUT);
  }
void loop() {
  // put your main code here, to run repeatedly:
VAL = digitalRead(8);
if (val == HIGH)
{
     digitalwrite(13,LOW);
}
else
{
     Digitalwrite(13,HIGH);
}      
delay(400);
}
Program Code

 int AC_WATER_PUMP = 13;
  int SENSOR = 8;
  int VAL;
  void setup()
{
  // put your setup code here, to run once:
  
  
    pinMode(13,OUTPUT);
    pinMode(8, INPUT);
  }
void loop() {
  // put your main code here, to run repeatedly:
VAL = digitalRead(8);
if (val == HIGH)
{
     digitalwrite(13,LOW);
}
else
{
     Digitalwrite(13,HIGH);
}      
delay(400);
}
