/* Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
Calcular e escrever o valor do novo salário. */

#include <stdio.h>

int main (){

    float salFunc, perReaj, nvSal;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salFunc);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &perReaj);

    nvSal = salFunc + (salFunc * perReaj / 100);

    printf("Novo salario: %.2f", nvSal);

    return 0;
}