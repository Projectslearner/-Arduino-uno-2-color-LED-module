/*
    Code by : Projects_learner
    Project name : 2 LED Module using Ardino UNO
    Modified Date : 28-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-3-color-led-module
*/




int RedPin= 11;         //pin 11 for red
int GreenPin = 10;      //pin 10 for green
int  BluePin = 9;       //pin 9 for blue


void setup()
{
  //Defining the pins as OUTPUT
  pinMode(RedPin,  OUTPUT);        //output for red      
  pinMode(GreenPin, OUTPUT);        //output for green 
  pinMode(BluePin, OUTPUT);         //output for blue  
}
void  loop()
{
  setColor(255, 0, 0); // Red Color
  delay(1000);

  setColor(0,  255, 0); // Green Color
  delay(1000);
  
  setColor(0, 0, 255); // Blue Color
  delay(1000);
 
}
void setColor(int RedValue, int GreenValue,  int BlueValue)
{
  analogWrite(RedPin, RedValue);
  analogWrite(GreenPin, GreenValue);
  analogWrite(BluePin, BlueValue);
}



