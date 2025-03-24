#include "Interface.h"
#include <stdio.h>
#include <unistd.h>

// declare so it can be used in main in order
void loop();

Pin but3;
Pin but4;
Pin eor6;
Pin eor7;

// AKA setup();
int main() {
    //     delay(500);
    //     Serial.begin(9600); define the clock
    //     mySerial.begin(9600);
    sleep(1);

    //   	//pinMode(but3, INPUT);
    //    	//pinMode(but4, INPUT);
    but3.type = PIN_INT;
    but3.pinValue = 3;
    but3.flow = "INP";

    but4.type = PIN_INT;
    but4.pinValue = 4;
    but4.flow = "OUT";

    //    	pinMode(eor6, OUTPUT);
    //    	pinMode(eor7, OUTPUT);
    eor6.type = PIN_INT;
    eor6.pinValue = 6;

    eor7.type = PIN_INT;
    eor7.pinValue = 7;

    //     lcd.init();
    //     lcd.backlight();
    //     lcd.setCursor(0,0);
    //     lcd.print("SHREK REDDY");

    //     // Anexando os servos aos pinos
    //     servo1.attach(pinServo1);
    //     servo2.attach(pinServo2);
    //     servo3.attach(pinServo3);

    //   	digitalWrite(eor6, LOW);
    //   	digitalWrite(eor7, LOW);
    return 0;
}

void loop() {

}

// #include <Servo.h>
// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>

// #include <SoftwareSerial.h>


// LiquidCrystal_I2C lcd(0x26, 16, 2);

// Servo servo1;
// Servo servo2;
// Servo servo3;


// // Pinos dos servos
// const int pinServo1 = 10;
// const int pinServo2 = 8;
// const int pinServo3 = 9;

// int eor7 = 7;
// int eor6 = 6;

// //int but3 = 3;
// //int but4 = 4;

// void setup() {
//   	delay(500);
//     Serial.begin(9600);
//     mySerial.begin(9600);

//   	//pinMode(but3, INPUT);
//    	//pinMode(but4, INPUT);

//    	pinMode(eor6, OUTPUT);
//    	pinMode(eor7, OUTPUT);

//     lcd.init();
//     lcd.backlight();
//     lcd.setCursor(0,0);
//     lcd.print("SHREK REDDY");

//     // Anexando os servos aos pinos
//     servo1.attach(pinServo1);
//     servo2.attach(pinServo2);
//     servo3.attach(pinServo3);

//   	digitalWrite(eor6, LOW);
//   	digitalWrite(eor7, LOW);
// }

// void loop() {
//   Serial.println("beggining");
//   Serial.println(mySerial.available());
//   if(mySerial.available()){
//   	int val, v, a, d, t, k;
//     val = Serial.parseInt();
// 	v = Serial.parseInt();
//     a = Serial.parseInt();
//     d = Serial.parseInt();
//     t = Serial.parseInt();

//     while (Serial.available() > 0) {
//     	Serial.read();  // Read and discard incoming data
// 	}

//     if(val <= -1 && val >= -3){
//       Serial.println(val);
//       if(val == -1){
//       //if(digitalRead(but3)) {
//         Serial.print("SHUTDOWN 2");
//       	digitalWrite(eor6, HIGH);
//       }

//       if(val == -2){
//       //if(digitalRead(but4)) {
//         Serial.print("SHUTDOWN 1");
//       	digitalWrite(eor7, HIGH);
//       }

//       Serial.print(v);
//       Serial.print(" ");
//       Serial.print(a);
//       Serial.print(" ");
//       Serial.print(d);
//       Serial.print(" ");
//       Serial.println(t);

//       // Exibir valores no LCD
//       lcd.clear();

//       lcd.setCursor(0, 0);
//       lcd.print("V:");
//       lcd.print(v);
//       lcd.print("Kmh");

//       lcd.setCursor(8, 0);
//       lcd.print(" A:");
//       lcd.print(a);
//       lcd.print("m");

//       lcd.setCursor(0, 1);
//       lcd.print("T:");
//       lcd.print(t);
//       lcd.print("C");

//       lcd.setCursor(9, 1);
//       lcd.print("D:");
//       lcd.print(d);
//       lcd.print("°");


//     }
//   }

//   delay(100);
//   digitalWrite(eor6, LOW);
//   digitalWrite(eor7, LOW);

//   // Movendo cada servo de 0° a 180° e depois voltando a 0°
//   //for (int pos = 0; pos <= 180; pos += 5) {
//   //  servo1.write(pos);
//   //  servo2.write(pos);
//   //  servo3.write(pos);
//   //}

//   //for (int pos = 180; pos >= 0; pos -= 5) {
//   //  servo1.write(pos);
//   //  servo2.write(pos);
//   //  servo3.write(pos);
//   //}

// }
