/* Gerenciamento de um Cadastro de Livros

Requisitos:

- Cada livro deve conter as seguintes informações:
	- Título (string);
	- Autor (uma estrutura que contém: nome, data de nascimento e sexo);
	- Ano de publicação;
	- Preço (float).

- Funcionalidades/Menus de opções:
	- Cadastro: Permitir ao usuário cadastrar novos livros, incluindo todos os detalhes do livro e do autor;
	- Listagem: Mostrar na tela todos os livros cadastrados, exibindo as informações de cada livro na ordem em que foram criados;
	- Gravação: Permitir que os dados de todos os livros cadastrados sejam gravados em um arquivo binário;
	- Leitura: Permitir que os dados dos livros sejam carregados de um arquivo binário para a memória, restaurando o estado anterior do cadastro.

- Considerações:
	- Utilize um array de estruturas para armazenar os livros cadastrados em memória;
	- Implemente funções para cada uma das funcionalidades mencionadas;
	- Utilize typedef para criar um alias para as estruturas, facilitando a leitura do código.

- Formato do Arquivo:
	- Utilize um formato binário para armazenar os dados de forma eficiente;
	- Grave os dados de cada livro de forma sequencial no arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct {
    int dia, mes, ano;
} DataNasci;

typedef struct {
    char nome[100];
    DataNasci nasci;
    char sexo;
} Autor;

typedef struct {
    char titulo[100];
    Autor autor;
    int ano_publi;
    float preco;
} Livro;

Livro lista[TAM];
int quant = 0;

int RegistroLivros() {
    if (quant < TAM) {
        Livro livro;
        scanf("%*c");

        printf("\nNome do livro: ");
        fgets(livro.titulo, sizeof(livro.titulo), stdin);
        livro.titulo[strcspn(livro.titulo, "\n")] = 0; // Remover nova linha

        printf("Nome do autor: ");
        fgets(livro.autor.nome, sizeof(livro.autor.nome), stdin);
        livro.autor.nome[strcspn(livro.autor.nome, "\n")] = 0; // Remover nova linha

        printf("Nascimento do autor (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &livro.autor.nasci.dia, &livro.autor.nasci.mes, &livro.autor.nasci.ano);

        printf("Sexo do autor (F ou M): ");
        scanf(" %c", &livro.autor.sexo); // O espaço antes de %c ignora espaços em branco

        printf("Ano de publicacao do livro: ");
        scanf("%d", &livro.ano_publi);

        printf("Preco do livro: ");
        scanf("%f", &livro.preco);

        lista[quant] = livro;
        quant++;
        return 1;
    } else {
        printf("Vetor cheio. Nao eh possivel cadastrar mais livros.");
        return 0;
    }
}

void ImprimeLivros() {
    for (int i = 0; i < quant; i++) {
        printf("\t\tLIVRO %d", i + 1);
        printf("\n\tLivro: %s", lista[i].titulo);
        printf("\n\tAutor: %s", lista[i].autor.nome);
        printf("\n\tData de nascimento do autor: %02d/%02d/%04d", lista[i].autor.nasci.dia, lista[i].autor.nasci.mes, lista[i].autor.nasci.ano);
        printf("\n\tSexo do autor: %c", lista[i].autor.sexo);
        printf("\n\tAno de publicacao do livro: %d", lista[i].ano_publi);
        printf("\n\tPreco: %.2f\n\n", lista[i].preco);
    }
}

int GravarLivros() {
    FILE *arq = fopen("booklist.bin", "wb");
    if (arq) {
        fwrite(lista, sizeof(Livro), quant, arq);
        fclose(arq);
        printf("Livros gravados com sucesso\n");
    } else {
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
    return 1;
}

int LeituraLivros() {
    FILE *arq = fopen("booklist.bin", "rb");
    if (arq) {
        quant = fread(lista, sizeof(Livro), TAM, arq);
        fclose(arq);
        printf("Livros lidos com sucesso\n");
        return 1;
    } else {
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
}

int main() {
    int opcao;

    do {
        printf("Cadastro de Livros");
        printf("\nEscolha uma opcao: \n1 - Cadastrar\n2 - Listagem\n3 - Gravacao\n4 - Leitura\n5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                RegistroLivros();
                break;
            case 2:
                ImprimeLivros();
                break;
            case 3:
                GravarLivros();
                break;
            case 4:
                LeituraLivros();
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 5);

    return 0;
}