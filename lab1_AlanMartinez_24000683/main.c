#include "RTE_Components.h"
#include <stdint.h>
#include CMSIS_device_header
#include <stdio.h>
#include "utilities.h"


int main() {
    // %u significa que es un entero sin signo (unsigned int) para imprimirlo en decimal

    uint32_t Start = 0; //  .. . . .. . . .  0000 0000
    uint32_t Start2 = 0xF; //  .. . . .. . . . 0000 1111
    uint8_t myString[] = "Hello, World!"; // arreglo de caracteres para ir viendo la cantidad de caracteres

    bitSet(&Start, 3); // moverlo 3 bits a la izquierda y ponerlo en 1 (set)
    printf("Start after bitSet: %u\r\n", Start); // ..... .. .. . . .   0000 1000 = 8


    bitClear(&Start2, 3); // moverlo 3 bits a la izquierda y ponerlo en 0 (clear)
    printf("Start after bitClear: %u\r\n", Start2); // ..... .. .. . . .   0000 0111 = 7


    bitToggle(&Start, 3); // moverlo 3 bits a la izquierda y cambiar su valor (toggle)
    printf("Start after bitToggle: %u\r\n", Start); // ..... .. .. . . .   0000 0000 = 0


    uint8_t length = stringLength(myString); // calcular la longitud del string 
    printf("Length of the string: %u\r\n", length); // ..... .. ..

    

    /////NO SE BORRA//////
    for (;;) {
    }
    ///////////
}