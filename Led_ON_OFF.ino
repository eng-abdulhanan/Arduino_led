void setup()
{

  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}
void loop()
{
  int val =digitalRead(2);
  if(val==LOW)
    {
      digitalWrite(13,HIGH);
    }
  else
  {
      digitalWrite(13,LOW);
  }
}
