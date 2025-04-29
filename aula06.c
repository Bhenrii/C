#include <stdio.h>

int main(){

    int numeronormal = 2147483647; // valor maximo de int
    long long int numerogrande = 2147483647;

    printf("Número regular (int): %d\n", numeronormal);
    printf("número grande (long int): %lld\n", numerogrande);

    numerogrande = 2147483648; //valor maior que o maximo de int
    printf("Número grande atualizado (long int): %ld\n", numerogrande);

    return 0;
}