#include <stdio.h>

int main(){
    short int numeropequeno = 32767; // valor maximo de short int
    printf("Número pequeno (short int): %d\n", numeropequeno);

    numeropequeno = 32768; // Valor maior qu o máximo de short int
    printf("Número pequeno atalizado (short int): %d\n", numeropequeno);

    printf("\n*** Tamanho das variaveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu B - Double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

   return 0;
}