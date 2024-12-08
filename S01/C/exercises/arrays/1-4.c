/* Faça um programa em C que utilizando as posições de mtrx copie todas as posições listadas abaixo para 
um novo vetor de char e possibilite que esse vetor seja corretamente impresso na tela como um texto através
do uso do comando printf mais o fomatador %s. Lista de posições: [1][5], [2][6], [4][4], [4][4], [3][0] e [3][4] */

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

    char place[7];  // 6 posições + /0

    place[0] = mtrx[1][5]; // P
    place[1] = mtrx[2][6]; // a
    place[2] = mtrx[4][4]; // s
    place[3] = mtrx[4][4]; // s
    place[4] = mtrx[3][0]; // e
    place[5] = mtrx[3][4]; // i
    place[6] = '\0';  

    printf("%s\n", place);

    return 0;
}
