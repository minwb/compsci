#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* banco_palavras[] = {   
    "computador", "livro", "mesa", "garrafinha", "chave", "carro", "sapato", "mochila", "grampeador", "fogao",
    "brigadeiro", "bolacha", "limonada", "lasanha", "agua", "pao", "refrigerante", "carne", "macarronada", "pizza",
    "coelho", "gato", "cachorro", "raposa", "leao", "aguia", "hamster", "corvo", "elefante", "pinguim",
    "preto", "verde", "vermelho", "azul", "rosa", "roxo", "marrom", "amarelo", "cinza", "branco",
    "brasil", "japao", "canada", "noruega", "australia", "turquia", "tailandia", "dinamarca", "polonia", "suecia"
};

// Exibe o menu do jogo
void menuJg(){
    printf("     _  ___   ____  ___    ____    _      _____ ___  ____   ____    _  \n");
    printf("    | |/ _ \\ / ___|/ _ \\  |  _ \\  / \\    |  ___/ _ \\|  _ \\ / ___|  / \\  \n");
    printf(" _  | | | | | |  _| | | | | | | |/ _ \\   | |_ | | | | |_) | |     / _ \\ \n");
    printf("| |_| | |_| | |_| | |_| | | |_| / ___ \\  |  _|| |_| |  _ <| |___ / ___ \\ \n");
    printf(" \\___/ \\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\\n");
}

// Função para desenhar o boneco da forca com espaçamento reduzido
void bonecoForca(int tentv){
    switch (tentv){
    case 0:
        printf("|----\n|   |\n|\n|\n|\n-\n");
        break;
    case 1:
        printf("|----\n|   |\n|   O\n|\n|\n-\n");
        break;
    case 2:
        printf("|----\n|   |\n|   O\n|   |\n|\n-\n");
        break;
    case 3:
        printf("|----\n|   |\n|   O\n|  /|\n|\n-\n");
        break;
    case 4:
        printf("|----\n|   |\n|   O\n|  /|\\\n|\n-\n");
        break;
    case 5:
        printf("|----\n|   |\n|   O\n|  /|\\\n|  /\n-\n");
        break;
    case 6:
        printf("|----\n|   |\n|   O\n|  /|\\\n|  / \\\n-\n");
        break;
    }
}

// Função para sortear uma palavra do banco de palavras
void sorteioPalavras(char palavra_cpy[]){
    strcpy(palavra_cpy, banco_palavras[rand() % 50]);  // Sorteia uma palavra do array de 50 palavras
}

int main() {
    srand(time(NULL));  // Gera a semente para o sorteio com base no tempo atual

    char palavra_cpy[100];         // Armazena a palavra sorteada
    char palavraEscondida[100];    // Armazena a versão escondida da palavra (com '_')
    char adivinha;                 // Armazena a letra adivinhada pelo jogador
    int tamPalavra, tentv = 0, foundCorrect = 0, found;  // tentv = tentativas, foundCorrect = acertos

    menuJg();  // Exibe o título do jogo

    // Sorteio da palavra
    sorteioPalavras(palavra_cpy);
    tamPalavra = strlen(palavra_cpy);  // Obtém o tamanho da palavra sorteada

    // Inicializa a palavra escondida com '_'
    for (int i = 0; i < tamPalavra; i++){
        palavraEscondida[i] = '_';
    }
    palavraEscondida[tamPalavra] = '\0';  // Adiciona o caractere de fim de string

    // Loop principal do jogo (enquanto o jogador não esgotar as tentativas ou acertar a palavra)
    while (tentv < 6 && foundCorrect < tamPalavra) {
        printf("\nPalavra: %s\n", palavraEscondida);
        printf("Digite uma letra: ");
        scanf(" %c", &adivinha);  // Lê a letra adivinhada (com espaço antes de %c para evitar problemas com '\n')

        found = 0;  // Reinicia a variável found a cada tentativa

        // Verifica se a letra está presente na palavra sorteada
        for (int i = 0; i < tamPalavra; i++){
            if (palavra_cpy[i] == adivinha && palavraEscondida[i] != adivinha) {
                palavraEscondida[i] = adivinha;  // Revela a letra na posição correta
                found = 1;
                foundCorrect++;  // Incrementa o número de acertos
            }
        }

        if (!found) {
            tentv++;  // Se a letra não foi encontrada, incrementa as tentativas
            bonecoForca(tentv);  // Desenha o boneco da forca
            printf("Errado! %d tentativas restantes\n", 6 - tentv);
        } else {
            printf("Voce acertou uma letra!\n");
            printf("Quantidade de acertos: %d\n", foundCorrect);  // Mostra a quantidade de acertos
        }
    }

    // Verifica se o jogador venceu ou perdeu
    if (foundCorrect == tamPalavra) {
        printf("\nParabens! Voce acertou a palavra: %s\n", palavra_cpy);
    } else {
        printf("\nVoce perdeu! A palavra era: %s\n", palavra_cpy);
    }

    return 0;
}
