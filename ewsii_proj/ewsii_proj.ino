#include "lcd.h"
#include "coloursensor.h"

class coloursensor cs;
class lcd lcd(0x27,16,2);
int t;
double a,k=3.2;
String A;

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.noBacklight();
  lcd.print("Please Wait");
  lcd.setCursor(0,1);
  lcd.print("Starting Up...");
  delay(1000);
  lcd.clear();
  lcd.print("Insert Sample");
  lcd.setCursor(0,1);
  lcd.print("and Press Start");
  delay(1000);
  lcd.clear();
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,INPUT);
  cs.init();
  digitalWrite(11,true);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  t=cs.getval(1,2);      
  a=log10(k*t);
  A=String(a,6);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Absorbance :");
  lcd.setCursor(0,1);
  lcd.print(A);
  delay(10000);
}
