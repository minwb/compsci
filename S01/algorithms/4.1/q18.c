/*  Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela 
poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu). */

#include <stdio.h>

int main (){
    int anoNasci, anoAtual;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNasci);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    if(anoAtual - anoNasci >= 18) {
        printf("Podera votar.");
    } else {
        printf("Nao podera votar.");
    }

    return 0;
}