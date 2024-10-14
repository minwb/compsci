/* 1.2 - Faça um programa em C que copie os dígitos de 0 até 9 da mtrx para um vetor criado por você.
Utilize do ..  while. Imprima o vetor de resultado. */

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

    char digits[10];  // vetor criado para armazenar os dígitos de 0 a 9
    int i = 0, j = 0; 
    int count = 0;    // contador para os dígitos encontrados

    do {
        j = 0;  // reinicia o índice da coluna em cada nova linha
        do {
            if (mtrx[i][j] >= '0' && mtrx[i][j] <= '9') {
                digits[count] = mtrx[i][j];  // copia o dígito encontrado
                count++;  // incrementa o contador de dígitos
            }
            j++;  // 
        } while (j < 10);
        i++; 
    } while (i < 10 && count < 10);  // continua até percorrer a matriz ou encontrar todos os dígitos

    for (int x = 0; x < count; x++) {
        printf("%c ", digits[x]);
    }
    printf("\n");

    return 0;
}
