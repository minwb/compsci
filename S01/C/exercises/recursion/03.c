/* Escreva uma função recursiva em C que calcule o fatorial de um número inteiro n. O fatorial de um número n 
(denotado como n!) é o produto de todos os inteiros positivos de 1 até n. Por definição, o fatorial de 0 é 1 (0! = 1). */

#include <stdio.h>

int fatorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x*fatorial(x - 1); 
    }
}

int main() {
    
    int n;

    printf("Calcular fatorial de: ");
    scanf("%d", &n);

    printf("%d", fatorial(n));

    return 0;
}
