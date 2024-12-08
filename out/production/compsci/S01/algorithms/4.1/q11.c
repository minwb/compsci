/*  Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele 
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de 
suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário 
final do vendedor. */

#include <stdio.h>

int main(){

    int numCarros;
    float vtVendas, SFixo, valCVen, SFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarros);
    printf("Digite o valor total de vendas: ");
    scanf("%f", &vtVendas);
    printf("Digite o salario fixo: ");
    scanf("%f", &SFixo);
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valCVen);

    SFinal = SFixo + (valCVen*numCarros) + (vtVendas * 0.05);
    printf("Salario final do funcionario: %2.f", SFinal);

    return 0;
}