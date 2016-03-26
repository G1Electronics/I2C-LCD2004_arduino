#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);

void setup()
{
  
  lcd.init();
  lcd.clear();
  lcd.backlight();  // lcd.noBacklight();

  lcd.setCursor(7,0);
  lcd.print("LCD2004");
  lcd.setCursor(9,1);
  lcd.print("I2C");
  lcd.setCursor(0,2);
  lcd.print("--------------------");
  lcd.setCursor(3,3);
  lcd.print("G1 Electronics");

}


void loop()
{
}
