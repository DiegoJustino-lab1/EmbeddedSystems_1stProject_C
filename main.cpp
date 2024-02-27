#include "mbed.h"

int main() {
    unsigned int mask_pin18 = 1 << 18;

    volatile unsigned int *port1_set = (unsigned int *)0x2009C038;
    volatile unsigned int *port1_clr = (unsigned int *)0x2009C03C;

    while (true) { 
        *port1_set |= mask_pin18;
        ThisThread::sleep_for(500ms); // Sleep for 500 milliseconds (0.5 seconds)
    }
}
