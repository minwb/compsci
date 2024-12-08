/* 1.3 - Faça um programa em C que copie os caracteres da diagonal principal para um vetor criado por você. 
Utilize for. Imprima o vetor de resultado. */

#include <stdio.h>

int main() {
    char mtrx[10][10] = {
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'},
        {'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'},
        {'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'},
        {'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7'},
        {'8', '9', ' ', '!', '"', '#', '$', '%', '&', '!'},
        {'(', ')', '*', '+', ',', '-', '.', '/', ':', ';'},
        {'<', '=', '>', '?', '@', '[', '!', ']', '^', '_'},
        {'`', '{', '|', '}', '~', ' ', ' ', ' ', ' ', ' '}
    };
    char diagonal[10];  // vetor que armazena a diagonal principal

    for (int i = 0; i < 10; i++) {
        diagonal[i] = mtrx[i][i];  // copia as posições onde o índice da linha e da coluna são iguais
    }

    for (int i = 0; i < 10; i++) {
        printf("%c ", diagonal[i]);  // impressão da diagonal principal
    }
    printf("\n");

    return 0;
}
