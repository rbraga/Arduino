int lightPin = 0; //define a pin for Photo resistor
int ledPin = 8;   //define a pin for LED

void setup()
{
  Serial.begin(9600); //Begin serial communcation
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(lightPin);
  Serial.println(sensorValue); //Write the value of the photoresistor to the serial monitor.

  if (sensorValue < 300)
  {
    digitalWrite(ledPin, HIGH);
  }

  if (sensorValue > 300)
  {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); //short delay for faster response to light.
}
