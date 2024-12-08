/* Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles. */

#include <stdio.h>

int main(){
    
    int valor1, valor2;

    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);

    if (valor1 > valor2){
        printf("Maior: %d", valor1);
    } else {
        printf("Maior: %d", valor2);
    }

    return 0;
}