/*
    Code by : Projects_learner
    Project name : 2 LED Module using Ardino UNO
    Modified Date : 28-05-2023
    Website : https://projectslearner.com/learn/arduino-uno-2-color-led-module
*/


int Red_light = 11;     // pin 11 for red light
int Green_light = 10;   //pin 10 for green light


void setup()
{
    pinMode(Red_light, OUTPUT);     //red light as output
    pinMode(Green_light, OUTPUT);   //green light as output
}


void loop()
 {
    int value = 0;     
   
    while (value <= 150) {
        analogWrite(Red_light, 150 - value);        //red dim
        analogWrite(Green_light, value);            //green glow
        delay( 100);
        value++;
    }


    value = 0;


   
    while (value <= 150) {
        analogWrite(Red_light, value);              //red glow
        analogWrite(Green_light, 150 - value);      //green glow
        delay(100);
        value++;
    }
}
