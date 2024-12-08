/* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a 
idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias. */

#include <stdio.h>

int main (){

    int anoNasci, mesNasci, diaNasci, anoAtual, mesAtual, diaAtual, anoTotal, mesTotal, diaTotal, niver;

    printf("Em que ano voce nasceu? ");
    scanf("%d", &anoNasci);
    printf("Em que mes voce nasceu? ");
    scanf("%d", &mesNasci);
    printf("Em que dia voce nasceu? ");
    scanf("%d", &diaNasci);

    printf("\nQual o ano atual? "); 
    scanf("%d", &anoAtual);
    printf("Qual o mes atual? ");
    scanf("%d", &mesAtual);
    printf("Que dia e hoje? ");
    scanf("%d", &diaAtual);

    anoTotal = (anoAtual - anoNasci) * 365; 
    mesTotal = (mesAtual - mesNasci) * 30; 
    
    if (diaAtual > diaNasci){
        diaTotal = diaAtual - diaNasci;
    } else {
        diaTotal = diaNasci - diaAtual;
    }

    niver = anoTotal + mesTotal + diaTotal;

    printf("\nVoce viveu %d dias", niver);

    return 0;
}