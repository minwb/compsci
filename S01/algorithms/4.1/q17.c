/*  Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever 
uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 
6 o aluno é aprovado). Escrever também a média calculada.  */

#include <stdio.h>

int main(){
    float n1, n2, mC;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    mC = (n1+n2)/2;

    if(mC >= 6){
        printf("Media calculada: %.2f", mC);
        printf("\nAluno aprovado.");
    } else {
        printf("Media calculada: %.2f", mC);
        printf("\nAluno nao aprovado.");
    }

    return 0;
}