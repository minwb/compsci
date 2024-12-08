/* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do 
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do 
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica 
de um carro, calcular e escrever o custo final ao consumidor. */

#include <stdio.h>

int main (){

    float custoFabrica, custoConsumidor, perDis, imp;

    printf("Qual o custo de fabrica? ");
    scanf("%f", &custoFabrica);

    perDis = custoFabrica*(28.0/100.0);
    imp = custoFabrica*(45.0/100.0);

    custoConsumidor = custoFabrica + perDis + imp;

    printf("Custo consumidor: %f", custoConsumidor);

    return 0; 
}