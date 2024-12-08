/*  Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo 
da média final é:                       n1*2  + n2*3 + n3*5
                        media final =  ----------------------
                                                10                   */

#include <stdio.h>

int main (){

    float n1, n2, n3, mF;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    mF = ((n1*2)+(n2*3)+(n3*5))/10;

    printf("\nMedia final: %.2f", mF);

    return 0;

}