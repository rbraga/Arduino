
int redpin = 8;   //Pin 9
int greenpin = 9; //Pin 10
int bluepin = 10; //Pin 11
int var = 0;
int var1 = 0;
int delayTime = 1000;

void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}

void loop()
{
  for (var = 250; var < 255; var++)
  {
    analogWrite(redpin, var); //RED
    analogWrite(greenpin, 0);
    delay(delayTime);
    analogWrite(redpin, 0); //GREEN
    analogWrite(greenpin, var);
    delay(delayTime);
    analogWrite(greenpin, 0); //BLUE
    analogWrite(bluepin, var);
    delay(delayTime);
    analogWrite(bluepin, 0);
    delay(delayTime);
  }

  for (var1 = 250; var1 < 255; var1++)
  {
    analogWrite(redpin, var1); //YELLOW
    analogWrite(greenpin, var1);
    delay(delayTime);
    analogWrite(redpin, 0);
    delay(delayTime);
    analogWrite(greenpin, var1); //CYAN
    analogWrite(bluepin, var1);
    delay(delayTime);
    analogWrite(greenpin, 0);
    delay(delayTime);
    analogWrite(bluepin, var1); //MAGENTA
    analogWrite(redpin, var1);
    delay(delayTime);
    analogWrite(bluepin, 0);
    delay(delayTime);
    analogWrite(bluepin, var1);
    analogWrite(redpin, var1);
    analogWrite(greenpin, var1);
  }
}
