#ifndef INTERFACE_H
#define INTERFACE_H

// The signal can be a name or an int
typedef enum { PIN_INT, PIN_NAME } PinType;

// Create an struct so it can receive each of both
typedef struct {
    PinType type;
    union {
        int pinValue;    // Numeric ports
        char pinName[2]; // Analogic ports
    };
    int signal;          // High or Low (1 or 0)
    char flow[3];
} Pin;

// Can change the signal for HIGH or LOW following the 1 or 0 command
// Dont recall if the *pin will change in the address if I send the &pin
void flipSignal(Pin *pin, int OPERATOR) {
    pin->signal = OPERATOR;
}

// Create the SoftwareSerial mySerial(0, 1) so the arduinos can communicate though this pins
typedef struct {
    Pin RX;
    Pin TX;
    int available;
    int buf[4];
} Serial;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

void output_lcd(char* message);

#endif // INTERFACE_H
