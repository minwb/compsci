/* As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem 
compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule 
e escreva o custo total da compra. */

#include <stdio.h>

int main(){

        int numMaca;
        float custoMaca;

        printf("Quantidade de macas compradas: ");
        scanf("%d", &numMaca);

        if (numMaca >= 12){
            custoMaca = numMaca * 1.00;
        } else {
            custoMaca = numMaca * 1.30;
        }

        printf("Custo total: %.2f", custoMaca);

        return 0;
        
}