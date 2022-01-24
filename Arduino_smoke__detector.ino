#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
long int analogValue;
long int soilHumid;
Adafruit_SSD1306 display(-1);
void setup()   
{                
  pinMode(8, INPUT); //pin D7 sebagai input
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(30,30);
  display.println("Syazztronic");
  display.display();
  delay(2000);
  display.clearDisplay();
}
void loop(){
  analogValue = analogRead(A0);  //mengambil bacaan analog
  soilHumid = map(analogValue,0,1024,0,100); //menukar bacaan 10-bit ke peratusan
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(5, 10);
  display.print("soil moisture:");
  display.print(soilHumid);
  display.print("%"); //memaparkan kelembapan tanah dalam unit %
  display.setCursor(5, 20);
  display.print("Digital Value: ");
  display.println(digitalRead(8));  //mengambil dan memaparkan bacaan digital
  display.display();
  delay(1000);
  display.clearDisplay();
}


  
