#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* banco_palavras[] = {   
    "computador", "livro", "mesa", "garrafinha", "chave", "carro", "sapato", "mochila", "grampeador", "fogao",  // objetos
    "brigadeiro", "bolacha", "limonada", "lasanha", "agua", "pao", "refrigerante", "carne", "macarronada", "pizza", // comida e bebida
    "coelho", "gato", "cachorro", "raposa", "leao", "aguia", "hamster", "corvo", "elefante", "pinguim",  // animais
    "preto", "verde", "vermelho", "azul", "rosa", "roxo", "marrom", "amarelo", "cinza", "branco",  // cores
    "brasil", "japao", "canada", "noruega", "australia", "turquia", "tailandia", "dinamarca", "polonia", "suecia" // paises
};

void menuJg(){
    printf("     _  ___   ____  ___    ____    _      _____ ___  ____   ____    _  \n");
    printf("    | |/ _ \\ / ___|/ _ \\  |  _ \\  / \\    |  ___/ _ \\|  _ \\ / ___|  / \\  \n");
    printf(" _  | | | | | |  _| | | | | | | |/ _ \\   | |_ | | | | |_) | |     / _ \\ \n");
    printf("| |_| | |_| | |_| | |_| | | |_| / ___ \\  |  _|| |_| |  _ <| |___ / ___ \\ \n");
    printf(" \\___/ \\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\\n");
}


void boneco(int tentv){
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

void sorteioPalavras(char palavra_cpy[]){ // função para sortear uma palavra do banco de palavras
    strcpy(palavra_cpy, banco_palavras[rand() % 50]); 
}

int main() {
    srand(time(NULL));  // gera a semente para o sorteio com base no tempo atual

    char palavra_cpy[100];         
    char palavraEscondida[100];    
    char adivinha;                 
    int tamPalavra, tentv = 0, foundCorrect = 0, found;

    menuJg();  // função que imprime o título do jogo

    sorteioPalavras(palavra_cpy);
    tamPalavra = strlen(palavra_cpy);  // sorteia uma palavra e obtém o seu tamanho

    for (int i = 0; i < tamPalavra; i++){
        palavraEscondida[i] = '_';
    }
    palavraEscondida[tamPalavra] = '\0';  // adiciona o caractere de fim de string

    while (tentv < 6 && foundCorrect < tamPalavra) {  // verificação de tentativa do usuário
        printf("\nPalavra: %s\n", palavraEscondida);
        printf("Digite uma letra: ");
        scanf(" %c", &adivinha); 

        found = 0;  // reinicia a cada tentativa

        for (int i = 0; i < tamPalavra; i++){  // verificação se a letra está presente na palavra
            if (palavra_cpy[i] == adivinha && palavraEscondida[i] != adivinha) {
                palavraEscondida[i] = adivinha;  // revelação da letra na posição correta
                found = 1;
                foundCorrect++;  // incrementa o número de acertos
            }
        }

        if (!found) {  // a cada tentativa errada imprime o boneco com uma parte a mais
            tentv++; 
            boneco(tentv); 
            printf("Errado! %d tentativas restantes\n", 6 - tentv);
        } else {
            printf("Voce acertou uma letra\n");
            printf("Quantidade de acertos: %d\n", foundCorrect);
        }
    }

    if (foundCorrect == tamPalavra) { // verificação se o jogador ganhou ou perdeu
        printf("\nParabens! Voce acertou a palavra: %s\n", palavra_cpy);
    } else {
        printf("\nVoce perdeu. A palavra era: %s\n", palavra_cpy);
    }

    return 0;
}
