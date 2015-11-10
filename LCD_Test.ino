#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F,2, 1, 0, 4, 5, 6, 7, 3,POSITIVE); 

int counter=0;

void setup() {

lcd.begin(16,2); 
lcd.clear();
lcd.print("Hello ITCS-2590!");

}

void loop() {

lcd.setCursor(7,1);
counter++;
lcd.print(counter);
delay(1000);

}
