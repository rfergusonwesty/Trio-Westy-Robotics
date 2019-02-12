void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() 
{
  if(Serial.available()>0)
  {
    char inData= Serial.read();
    Serial.print(inData);
    if(inData=='a')
    {
      digitalWrite(13,HIGH);
      delay(500);s
    }
    else
    {
    digitalWrite(13,LOW);
    }
    
  }

}
