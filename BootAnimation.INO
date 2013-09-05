/*
 *Will Keyser
 *2013
 *Adafruit SSD1306 128x64 OLED display
 *ATmega328 @ 16MHz
 */
 
//Include header files (libraries)
#include <Wire.h>                    //Hardware SPI interface
#include <Adafruit_GFX.h>            //Adafruit's amazing graphics library
#include <Adafruit_SSD1306.h>        //SSD1306 instruction set library

//Define SPI bus pins
#define OLED_DC 11
#define OLED_CS 13
#define OLED_CLK 10
#define OLED_MOSI 9
#define OLED_RESET 12

//Asign AVR pins to the SPI bus
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

//Make sure the display is 128x64
#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

//Subroutine that will run at boot up
void setup()   {                
  Serial.begin(9600);                   //begin talking to UART
  
  display.begin(SSD1306_SWITCHCAPVCC);  //Activate the onboard charge pump
  display.clearDisplay();               //Clears the screen and buffer
  display.setTextColor(WHITE);
 
 //---------------------------------------------------------------------- 
  
//The following is a little animation I wrote up, but actually does nothing:
  display.setTextSize(2);
  display.println("WILLOS_1.1");
  display.display();
  delay(1600);
  display.clearDisplay();
  display.setTextSize(1);
  display.clearDisplay();
  display.setCursor(0,0);
  
    display.println("INIT()");
    display.display();
    delay(60);
  
    display.println("BOOT()");
    display.display();
    delay(60);
  
    display.println("AVR()");
    display.display();
    delay(60);
  
    display.println("SSD1306()");
    display.display();
    delay(60);
  
    display.println("WILL()");
    display.display();
    delay(60);
    
    display.println("EEPROM()");
    display.display();
    delay(60);
    
    display.println("RAM()");
    display.display();
    delay(60);
    
    display.println("XCOSC()");
    display.display();
    delay(60);
    
    display.clearDisplay();
    display.setCursor(0,0);
    delay(24);
    
    display.println("ARDUINO()");
    display.display();
    delay(60);
  
    display.println("OLED()");
    display.display();
    delay(60);
  
    display.println("VBAT()");
    display.display();
    delay(60);
  
    display.println("SPI()");
    display.display();
    delay(60);
  
    display.println("I2C()");
    display.display();
    delay(60);
    
    display.println("WIRE()");
    display.display();
    delay(60);
    
    display.println("HBITS()");
    display.display();
    delay(60);
    
    display.println("LBITS()");
    display.display();
    delay(60);
      
  display.clearDisplay();
  display.setTextSize(2);
      
      delay(20);
      display.println("");
      display.setCursor(0,0);
      display.print("REBOOT");
      display.display();
      delay(520);
      display.print(".");
      display.display();
      delay(520);
      display.print(".");
      display.display();
      delay(520);
      display.print(".");
      display.display();
      
      //Pretty circles! Trippy!
    for (int16_t i=2; i<display.height(); i+=2) {
      display.drawCircle(display.width()/2, display.height()/2, i, WHITE);
      display.drawCircle(display.width()/4, display.height()/2, i, WHITE);
      display.drawCircle(display.width()/1.25, display.height()/2, i, WHITE);
      display.display(); 
      delay(20);
    }
  

    display.clearDisplay();
    display.setCursor(0,0);
    display.setTextSize(2);
    display.println("LOADED!");
    display.display();
    delay(1000);
}

//Now then, let's get to business.  The main loop:
void loop() {

 /*
  *
  *
  *
  *
  *
  *INSERT YOUR ACTUAL PROGRAM HERE
  *
  *
  *
  *
  *
  *
  */
}
