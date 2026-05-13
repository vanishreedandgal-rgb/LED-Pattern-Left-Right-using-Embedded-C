/*
------------------------------------------------------------
Project Name :  LED Pattern (Left–Right)
Author       : Your Name
Controller   : ATmega328P / ATmega16 / ATmega32
Clock        : 16 MHz
Description  :
This program creates a running LED pattern using PORTD.
LEDs connected from PD2 to PD7 glow from right to left
and then left to right continuously.

Learning Concepts:
- GPIO Configuration
- Register Level Programming
- Bit Shifting Operations
- Embedded C Programming
------------------------------------------------------------
*/

#define F_CPU 16000000UL     // Define CPU Frequency (16 MHz)

#include <avr/io.h>          // AVR I/O register definitions
#include <util/delay.h>      // Delay functions

int main(void)
{
    //--------------------------------------------------------
    // Configure PORTD Pins PD2–PD7 as OUTPUT
    //--------------------------------------------------------
    DDRD = 0b11111100;       // Set PD2–PD7 as output pins

    //--------------------------------------------------------
    // Infinite Loop
    //--------------------------------------------------------
    while (1)
    {
        unsigned char led;

        //----------------------------------------------------
        // RIGHT → LEFT LED Movement
        //----------------------------------------------------
        led = 0b00000100;    // Start from PD2

        for (int i = 0; i < 6; i++)
        {
            PORTD = led;     // Turn ON current LED
            _delay_ms(200);  // Wait 200 ms

            led = led << 1;  // Shift LED left
        }

        //----------------------------------------------------
        // LEFT → RIGHT LED Movement
        //----------------------------------------------------
        led = 0b01000000;    // Start from PD6

        for (int i = 0; i < 4; i++)
        {
            PORTD = led;     // Turn ON current LED
            _delay_ms(200);  // Wait 200 ms

            led = led >> 1;  // Shift LED right
        }
    }
}
