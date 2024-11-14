int a;
#include <liquidcrystal.h>
void setup() {
  serial.begin(9600);
  lcd.begin(16,2);
  int a=Serial.available(a>0);
  lcd.parseIn(a);

}

void loop() {
  // put your main code here, to run repeatedly:

}
