#include "Interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// declare so it can be used in main in order
void loop();

Pin but3;
Pin but4;
Pin eor6;
Pin eor7;

Serial mySerial;

// AKA setup();
int main() {
    //     delay(500);
    //     Serial.begin(9600); define the clock
    //     mySerial.begin(9600);
    sleep(1);
    Pin RX;
    Pin TX;
    RX.type = PIN_INT;
    RX.pinValue = 0;
    strcpy(RX.flow, "SER");
    TX.type = PIN_INT;
    TX.pinValue = 0;
    strcpy(TX.flow, "SER");

    mySerial.RX = RX;
    mySerial.TX = TX;
    mySerial.available = 1;

    //   	//pinMode(but3, INPUT);
    //    	//pinMode(but4, INPUT);
    but3.type = PIN_INT;
    but3.pinValue = 3;
    strcpy(but3.flow, "INP");

    but4.type = PIN_INT;
    but4.pinValue = 4;
    strcpy(but4.flow, "INP");;

    //    	pinMode(eor6, OUTPUT);
    //    	pinMode(eor7, OUTPUT);
    //   	digitalWrite(eor6, LOW);
    //   	digitalWrite(eor7, LOW);
    eor6.type = PIN_INT;
    eor6.pinValue = 6;
    strcpy(eor6.flow, "OUT");
    flipSignal(&eor6, 0);

    eor7.type = PIN_INT;
    eor7.pinValue = 7;
    strcpy(eor7.flow, "OUT");
    flipSignal(&eor7, 1);

    //     lcd.init();
    //     lcd.backlight();
    //     lcd.setCursor(0,0);
    //     lcd.print("SHREK REDDY");
    output_lcd("SHREK REDDY");

    //     Anexando os servos aos pinos
    //     servo1.attach(pinServo1);
    //     servo2.attach(pinServo2);
    //     servo3.attach(pinServo3);
    loop();

    return 0;
}

void loop() {
    while(1) {
        //   Serial.println("beggining");
        //   Serial.println(mySerial.available());
        //   After check if it works couse of the commercial (&)
        printf("beggining\n%d\n", &mySerial.available);
        //   if(mySerial.available()){
        if(mySerial.available) {
            //   	int val, v, a, d, t, k;
            //     val = Serial.parseInt();
            // 	v = Serial.parseInt();
            //     a = Serial.parseInt();
            //     d = Serial.parseInt();
            //     t = Serial.parseInt();
            int val, v, a, d, t;
            val = mySerial.buf[0];
            v = mySerial.buf[1];
            a = mySerial.buf[2];
            d = mySerial.buf[3];
            t = mySerial.buf[4];
            //     while (Serial.available() > 0) {
            //     	Serial.read();  // Read and discard incoming data
            // 	}

            //     if(val <= -1 && val >= -3){
            //       Serial.println(val);
            if(val <= -1 && val >= -3) {
                printf("%d\n", val);
                //       if(val == -1){
                //       //if(digitalRead(but3)) {
                //         Serial.print("SHUTDOWN 2");
                //       	digitalWrite(eor6, HIGH);
                //       }
                if(val == -1) {
                    printf("SHUTDOWN COMPUTER 1\n");
                    flipSignal(&eor6, 1);
                }

                //       if(val == -2){
                //       //if(digitalRead(but4)) {
                //         Serial.print("SHUTDOWN 1");
                //       	digitalWrite(eor7, HIGH);
                //       }
                if(val == -2) {
                    printf("SHUTDOWN COMPUTER 2\n");
                    flipSignal(&eor7, 1);
                }

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

                char out_str[40];
                sprintf(out_str, "V: %d Km/h \t\tA: %d m \nT: %d C \t\tD: %d°\n", &v,&a, &d, &t);  // Convert integer v to string
                output_lcd(out_str);

                //   delay(100);
                //   digitalWrite(eor6, LOW);
                //   digitalWrite(eor7, LOW);
                sleep(1);
                flipSignal(&eor6, 0);
                flipSignal(&eor7, 0);
            }
        }





        //     }
        //   }


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

    }
}
