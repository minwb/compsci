#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define RODADAS 5   // quantidade de rodadas totais

char* banco_palavras[] = {   
    "computador", "livro", "mesa", "garrafinha", "chave", "carro", "sapato", "mochila", "grampeador", "fogao",  // objetos
    "brigadeiro", "bolacha", "limonada", "lasanha", "agua", "pao", "refrigerante", "carne", "macarronada", "pizza", // comida e bebida
    "coelho", "gato", "cachorro", "raposa", "leao", "aguia", "hamster", "corvo", "elefante", "pinguim",  // animais
    "preto", "verde", "vermelho", "azul", "rosa", "roxo", "marrom", "amarelo", "cinza", "branco",  // cores
    "brasil", "japao", "canada", "noruega", "australia", "turquia", "tailandia", "dinamarca", "polonia", "suecia" // paises
};

void menuJg() {
    printf("     _  ___   ____  ___    ____    _      _____ ___  ____   ____    _  \n");
    printf("    | |/ _ \\ / ___|/ _ \\  |  _ \\  / \\    |  ___/ _ \\|  _ \\ / ___|  / \\  \n");
    printf(" _  | | | | | |  _| | | | | | | |/ _ \\   | |_ | | | | |_) | |     / _ \\ \n");
    printf("| |_| | |_| | |_| | |_| | | |_| / ___ \\  |  _|| |_| |  _ <| |___ / ___ \\ \n");
    printf(" \\___/ \\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\\n");
}

void boneco(int tentv) {
    switch (tentv) {
        case 0:
            printf("|----\n|   |\n|\n|\n|\n-\n");   // vazio
            break;
        case 1:
            printf("|----\n|   |\n|   O\n|\n|\n-\n");   // cabeça
            break;
        case 2:
            printf("|----\n|   |\n|   O\n|   |\n|\n-\n");  // tronco
            break;
        case 3:
            printf("|----\n|   |\n|   O\n|  /|\n|\n-\n");  // braço esquerdo
            break;
        case 4:
            printf("|----\n|   |\n|   O\n|  /|\\\n|\n-\n");  // braço direito
            break;
        case 5:
            printf("|----\n|   |\n|   O\n|  /|\\\n|  /\n-\n");  // perna esquerda
            break;
        case 6:
            printf("|----\n|   |\n|   O\n|  /|\\\n|  / \\\n-\n");  // perna direita
            break;
    }
}

void sorteioPalavras(char palavra_cpy[]) { 
    strcpy(palavra_cpy, banco_palavras[rand() % 50]); 
}

int verf_acertos(char palavra_cpy[], char palavraEscondida[], char adivinha, int tamPalavra) {
    int acertos = 0;
    for (int i = 0; i < tamPalavra; i++) { 
        if (palavra_cpy[i] == adivinha && palavraEscondida[i] != adivinha) {  // verifica se a letra que o jogador escolheu equivale a letra correta
            palavraEscondida[i] = adivinha;  // revela a letra
            acertos++;  // incrementa o número de acertos
        }
    }
    return acertos;
}

int main() {
    
    srand(time(NULL));  // gera uma semente em função do tempo do computador

    char palavra_cpy[100];  //  palavra que foi sorteada fica copiada nessa variável
    char palavraEscondida[100];  // a mesma palavra copiada tem as letras escondidas e fica armazenada nessa variável
    char adivinha;  
    int tamPalavra, tentv, foundCorrect, acertos;

    menuJg();  // função que mostra o nome do jogo


    for (int i = 0; i < RODADAS; i++) {   // laço que roda por 5 rodadas

        printf("\nPartida %d de %d \n", i + 1, RODADAS);  

        sorteioPalavras(palavra_cpy);  // função que sorteia uma palavra contida no array "banco_palavras"
        tamPalavra = strlen(palavra_cpy);  // atribuição do tamanho da palavra sorteada

        tentv = 0;        // reinicializa as tentativas para 0
        foundCorrect = 0;  // reinicializa o número de acertos para 0

        for (int i = 0; i < tamPalavra; i++) {  
            palavraEscondida[i] = '_';  // troca cada letra por "_" e atribui ao novo array
        }
        palavraEscondida[tamPalavra] = '\0';  // garante que a string armazenada termine com o caractere nulo


        while (tentv < 6 && foundCorrect < tamPalavra) {  // loop para as tentativas de acertar a palavra
            printf("\nPalavra: %s\n", palavraEscondida);
            printf("Digite uma letra: ");
            scanf(" %c", &adivinha);  // armazena a letra escolhida 

            acertos = verf_acertos(palavra_cpy, palavraEscondida, adivinha, tamPalavra); // função que retorna a quantidade de acertos 

            if (acertos > 0) {  //  
                foundCorrect += acertos;  // acumulação de acertos durante a rodada
                printf("Voce acertou %d letra(s)!\n", acertos);
            } else {
                tentv++;
                boneco(tentv); // função que desenha o boneco
                printf("Errado! %d tentativas restantes\n", 6 - tentv);
            }
        }

        if (foundCorrect == tamPalavra) {  // verifica se o jogador ganhou ou perdeu a partida
            printf("\nParabens! Voce acertou a palavra: %s\n", palavra_cpy);
        } else {
            printf("\nVoce perdeu. A palavra era: %s\n", palavra_cpy);
        }
    }

    return 0;
}