#include "lcd.h"
//#include "coloursensor.h"
//
//class coloursensor cs;
class lcd lcd(0x27,16,2);
double t=0.1427;
//uint8_t reading;

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.noBacklight();
  lcd.print(t);
  //lcd.noBacklight();
//  pinMode(0,OUTPUT);
//  pinMode(1,OUTPUT);
//  pinMode(2,OUTPUT);
//  pinMode(3,OUTPUT);
//  pinMode(4,INPUT);
//  pinMode(5,OUTPUT);
//  pinMode(6,OUTPUT);
//  cs.init();
//  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
//  reading=cs.getval(0,2);
//  Serial.print(reading);
//  Serial.print(" ");
//  reading=cs.getval(3,2);
//  Serial.print(reading);
//  Serial.print(" ");
//  reading=cs.getval(1,2);
//  Serial.println(reading);
//  delay(1000);
}
