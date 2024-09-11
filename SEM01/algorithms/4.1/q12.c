/*  Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor 
correspondente em graus Celsius (baseado na fórmula abaixo): 
         C        F - 32
     --------- = ---------       OBS: para testar se sua resposta está correta, saiba que 100ºC = 212F
         5           9
*/

#include <stdio.h>

int main (){

    int GrausF, GrausC;

    printf("Temperatura em Fahrenheit: ");
    scanf("%d", &GrausF);

    GrausC = ((GrausF - 32)*5) / 9;

    printf("Temperatura equivalente em Celsius: %d", GrausC);

    return 0;
}