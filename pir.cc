
int sensorPin = 5;
int ledPin = 9;
int estadoSensor = LOW;
void setup()
{
 pinMode(sensorPin, INPUT);
 pinMode(ledPin, OUTPUT);
  
}
 
void loop()
{
   
 estadoSensor = digitalRead(sensorPin);
  
  if(estadoSensor == HIGH){
    digitalWrite(ledPin, HIGH);
  	delay(1000); 
  }else{
	digitalWrite(ledPin, LOW);
    delay(1000);
  }
}
