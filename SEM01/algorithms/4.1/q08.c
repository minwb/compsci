/* Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos 
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao 
total de eleitores. */

#include <stdio.h>

int main() {

    float totalElei, vB, vN, vV, perVB, perVN, perVV;

    printf("Total de eleitores: ");
    scanf("%f", &totalElei);

    printf("Total de votos nulos: ");
    scanf("%f", &vN);
    
    printf("Total de votos brancos: ");
    scanf("%f", &vB);

    printf("Total de votos validos: ");
    scanf("%f", &vV);

    perVN = (vN / totalElei) * 100;
    perVB = (vB / totalElei) * 100;
    perVV = (vV / totalElei) * 100;

    printf("\nPorcentagem de Votos Nulos: %.2f%%", perVN);
    printf("\nPorcentagem de Votos Brancos: %.2f%%", perVB);
    printf("\nPorcentagem de Votos Validos: %.2f%%", perVV);

    return 0;
}