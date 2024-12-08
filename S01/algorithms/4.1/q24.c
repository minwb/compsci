/* ) Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se 
que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o 
que ultrapassar este valor, calcular e escrever o seu salário total. */

#include <stdio.h>

int main(){

    float salarioFixo, valorVendas, salarioTotal, aux;

    printf("Valor do Salario Fixo: ");
    scanf("%f", &salarioFixo);

    printf("Valor das vendas efetuadas: ");
    scanf("%f", &valorVendas);

    if (valorVendas <= 1500){
        salarioTotal = salarioFixo + (valorVendas*0.03);
    } else {
        aux = valorVendas - 1500;
        salarioTotal = salarioFixo + (1500*0.03) + (aux*0.05);
    } printf("Salario total: %.2f", salarioTotal);

    return 0;
}