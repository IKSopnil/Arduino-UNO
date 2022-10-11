void Setup()
{
pinMode(13,OUTPUT);
pinMode(2,INPUT);
}
void loop()
{
if(digitalRead(2)==HIGH)
{
digitalWrite(13,HIGH);
}
else if(digitalRead(2)==LOW)
{
digitalWrite(13,LOW);
}
}