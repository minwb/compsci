/*  Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e 
escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for 
maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo 
Negativo'. */

#include <stdio.h>

int main(){

    int numConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o numero da conta: ");
    scanf("%d", &numConta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    printf("Digite o debito: ");
    scanf("%f", &debito);

    printf("Digite o credito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;
    printf("\nSaldo Atual: %.2f", saldoAtual);

    if(saldoAtual >= 0){
        printf("\nSaldo Positivo.");
    } else {
        printf("\nSaldo Negativo.");
    }

    return 0; 
}