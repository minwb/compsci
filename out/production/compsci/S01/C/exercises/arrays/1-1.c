// 1.1 - Faça um programa em C que imrpima a matriz completa, usando o comando while. 

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
    
    int i = 0;  // Inicializa o índice das linhas
    while (i < 10) {
        int j = 0;  // Inicializa o índice das colunas
            while (j < 10) {
            printf("%c ", mtrx[i][j]);  // Imprime o elemento da linha i e coluna j
            j++;  // Incrementa o índice das colunas
        }
        printf("\n");  // Quebra de linha após cada linha ser impressa
        i++;  // Incrementa o índice das linhas
    }

    return 0;
}
