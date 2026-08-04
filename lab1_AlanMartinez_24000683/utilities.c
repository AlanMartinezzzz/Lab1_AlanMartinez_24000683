#include "utilities.h"
// recibe como argumento la direccion de memoria de una variable entera de 32 bits sin signo (uint32_t) y un numero 
// entre 0 y 31 cual indica al bit que se desea modificar al valor que apunta ptr remplazando el valor a 1
void bitSet(uint32_t *ptr, uint8_t bit){
    *ptr = *ptr | (1 << bit); // mueve el 1 a la izquierda el numero de bits que se le indique
}

// lo mismo que la anterior pero remplaza el valor a 0
void bitClear(uint32_t *ptr, uint8_t bit){
    *ptr = *ptr & ~(1 << bit); // movemos el 1 a la izqueirda pero lo negamos para que sea 0 y luego un and para siempre dar 0 (clear)
}

// lo mismo que la anterior pero remplaza el valor a 1 si es 0 y a 0 si es 1
void bitToggle(uint32_t *ptr, uint8_t bit){
    *ptr = *ptr ^ (1 << bit); // el que nos ayuda con este problema es el XOR (^) 
    // que nos ayuda a cambiar el valor de 1 a 0 y de 0 a 1
}

// recibe un string y devuelve la cantidad de caracteres que contiene, sin contar el caracter nulo
uint8_t stringLength(uint8_t *str){
    // contador
    uint8_t length = 0;
    while (str[length] != '\0') { // mientras el caracter no sea nulo
        length++; // incrementamos el contador
    }
    return length; // devolvemos la longitud del string
}