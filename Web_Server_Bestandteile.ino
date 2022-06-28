#include <LiquidCrystal_I2C.h>

int drei_led_rot = 12;
int drei_led_gruen = 13;
int drei_led_blau = 14;
int weis_1 = 26;
int weis_2 = 27;
int rot = 5;

LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  pinMode(drei_led_rot,OUTPUT);
  pinMode(drei_led_gruen,OUTPUT);
  pinMode(drei_led_blau, OUTPUT);
  pinMode(weis_1, OUTPUT);
  pinMode(weis_2, OUTPUT);
  pinMode(rot, OUTPUT);
  lcd.init();   
  lcd.backlight();
}

void loop() {
  digitalWrite(weis_1, HIGH);
  digitalWrite(weis_2, HIGH);
  digitalWrite(rot, HIGH);
  lcd.setCursor(0,0);
    lcd.println("HERZLICH WILKOMMEN!");
    lcd.setCursor(0,1);
    lcd.println("WIR SEHEN UNS IN WALHALLA!");
  analogWrite(drei_led_rot, 150);
  delay(1000);
  analogWrite(drei_led_rot, 0);
  delay(1000);
  analogWrite(drei_led_gruen, 150);
  delay(1000);
  analogWrite(drei_led_gruen, 0);
  delay(1000);
  analogWrite(drei_led_blau, 150);
  delay(1000);
  analogWrite(drei_led_blau, 0);
  delay(1000);
}
