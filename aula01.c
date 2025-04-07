#include <stdio.h>

int main(){
    int idade = 0;
    float altura = 0.0;
    char opcao = 'S';
    char nome[20] = " ";

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("O nome é:  %s. \n", nome);

    printf("Digite a idade do %s: ", nome);
    scanf("%d", &idade);
    printf("A idade de %s é: %d. \n", nome, idade);

    printf("Digite a altura de %s: ", nome);
    scanf("%f", &altura);
    printf("A altura de %s é: %.2f. \n", nome, altura);

    return 0;
}