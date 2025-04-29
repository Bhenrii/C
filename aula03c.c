#include <stdio.h>

int main(){
 
    int numero1 = 1, resultado;

    /*
    incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Incremento --a
    Pós-Incremento a--
    */

    printf("Antes incremento: %d\n", numero1);
    //numero1++;

    resultado = numero1++;
    printf("Apos Pós-incremento - número 1: %d - resultado: %d\n", numero1, resultado);
   
    resultado = ++numero1;
    printf("Apos Pré-incremento - número 1: %d - resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Apos Pós-decremento - número 1: %d - resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pré-decremento - número 1: %d - resultado: %d\n", numero1, resultado);


}