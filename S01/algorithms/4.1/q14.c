/* Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso 
contrário escrever NÃO É MAIOR QUE 10! */

#include <stdio.h>

int main(){

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("E MAIOR QUE 10!");
    } else {
        printf("NAO E MAIOR QUE 10!");
    }

return 0;

}