/*  Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente. */

#include <stdio.h>

int main (){

    int valor1, valor2;

    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);

    if (valor1 > valor2){
        printf("Ordenacao: %d %d", valor2, valor1);
    } else {
        printf("Ordenacao: %d %d", valor1, valor2);
    }

    return 0;
}