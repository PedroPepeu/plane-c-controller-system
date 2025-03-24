#include "Interface.h"
#include <stdio.h>

Pin VELOCIDADE_IN;
Pin ALTITUDE_IN;
Pin DIRECAO_IN;
Pin TEMPERATURA_IN;
Pin reset_pin;
Pin reset_ac;

int main() {
    VELOCIDADE_IN.type = PIN_NAME;
    ALTITUDE_IN.type = PIN_NAME;
    DIRECAO_IN.type = PIN_NAME;
    TEMPERATURA_IN.type = PIN_NAME;

}

// Function implementations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0.0;
    }
    return (double)a / b;
}

// // Código C++ para Arduino
// int VELOCIDADE_IN = A0;
// int ALTITUDE_IN = A1;
// int DIRECAO_IN = A2;
// int TEMPERATURA_IN = 3;
// int reset_pin = 13;
// int reset_ac = 12;

// void setup()
// {
//   	pinMode(reset_pin, INPUT);
//     pinMode(VELOCIDADE_IN, INPUT);
//     pinMode(ALTITUDE_IN, INPUT);
//     pinMode(DIRECAO_IN, INPUT);

//     pinMode(TEMPERATURA_IN, INPUT);

//   	Serial.begin(9600);
//   	delay(1000);  // Wait for serial to stabilize
// }

// void clearSerialBuffer() {
//     while (Serial.available() > 0) {
//         Serial.read();  // Discard any available data in the buffer
//     }
// }

// void loop()
// {
//   	if(digitalRead(reset_pin)) {
//       	Serial.print("Reseting");
//   		digitalWrite(reset_ac, HIGH);
//       	delay(1000);  // Add a delay after reset
//       	clearSerialBuffer();
//       	Serial.flush();
//       	Serial.begin(9600);
//         delay(1000);
//       	Serial.print("Turn on");
//     	delay(1000);
//     }
//     int velocidade = analogRead(VELOCIDADE_IN);

//     // Conversão matemática da altitude (0 a 7000)
//     float altitude = (analogRead(ALTITUDE_IN) * 7000.0) / 1023.0;
//     if (altitude < 0) altitude = 0;
//     if (altitude > 7000) altitude = 7000;

//     // Conversão matemática da direção (0 a 360)
//     float direcao = (analogRead(DIRECAO_IN) * 360.0) / 1023.0;
//     if (direcao < 0) direcao = 0;
//     if (direcao > 360) direcao = 360;

//     // Conversão matemática da temperatura (0 a 275)
//     //float temperatura = (analogRead(TEMPERATURA_IN) * 275.0) / 1023.0;
//     //if (temperatura < 0) temperatura = 0;
//     //if (temperatura > 275) temperatura = 275;

// 	int temperaturaC=analogRead(TEMPERATURA_IN);
// 	float Tensao=temperaturaC*5;
// 	Tensao/=1024;
// 	float temperatura=(Tensao-0.5)*100;

//     // Enviar dados para o monitor serial do PC
//   	Serial.print((int)-1);
//     Serial.print(" ");
//     Serial.print((int)velocidade);
//     Serial.print(" ");
//     Serial.print((int)altitude);
//     Serial.print(" ");
//     Serial.print((int)direcao);
//     Serial.print(" ");
//     Serial.print((int)temperatura);
//     Serial.print("\n");

// }
