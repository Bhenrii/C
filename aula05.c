#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("=-=-=-=  Programa de Cálculo de Média =-=-=-=\n");
    printf("Digite sua 1° nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua 2° nota: \n");
    scanf("%d", &nota2);
    
    printf("Digite sua 3° nota: \n");
    scanf("%d", &nota3);
    
    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f\n", media);

    return 0;
}