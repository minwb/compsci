#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

/*   Em arquivos, é necessário criar um tipo de estrutura que os dados
serão armazenados em um vetor para que eles sejam salvos em determinado
formato, e assim ser possível abrir o arquivo e ler as informações inseridas.

Primeiro, vamos criar um tipo de dado chamado Pessoa.   */

typedef struct{
    char nome[50];  
    int idade;      
    char sexo;     
} Pessoa;

Pessoa lista[TAM]; // Vetor global do tipo Pessoa, do tamanho TAM (10). 
/* Declarar um vetor como global significa que ele será acessível e 
modificável em todas as funções, não apenas dentro de uma específica. */ 

int quant = 0; // Quantidade de pessoas inseridas no vetor, e começa com zero

int RegistPeople(){   // Função que registra cada pessoa
    if (quant < TAM){   // Verificação para saber se o vetor está cheio
         Pessoa p;      // Declaração de uma variável do tipo Pessoa
         /* Na função main(), é feito um menu de escolha pro usuário ler ou imprimir
         os dados de cada pessoa, então ele digita 1 e enter por ex. O fgets vai ler
         esse enter no lugar do nome, dando erro. Por isso, é preciso limpar o buffer
         do teclado ANTES. */
         scanf("%*c");      // Limpa o buffer
         printf("\nDigite seu nome: ");   
         fgets(p.nome, 50, stdin);   // Leitura do nome
         printf("Digite a idade: ");
         scanf("%d", &p.idade);      // Leitura da idade
         printf("Digite o sexo: ");
         scanf(" %c", &p.sexo);       // Leitura do sexo
         // Até esse ponto fizemos apenas a leitura dos dados, é preciso salvar na nossa lista de Pessoas
         lista[quant] = p; // quant representa o índice do vetor e a quantidade de pessoas cadastradas
         quant++; // 0 + 1.. + 2 .. (até ser menor que TAM)
         return 1; // Cadastro realizado com sucesso
    } else {            
        printf("ERRO: vetor cheio. \n\n");    // Se sim, mensagem de erro
        return 0; // Vetor cheio
    }
}

void PrintPeople(){  // Função que mostra para o usuário as pessoas cadastradas
    int i;      
    /* Como os dados estão salvos em um vetor, precisamos de um loop para mostrar
    eles na tela. Por que esse laço percorre até i ser menor que quant e não TAM?
    Pois se o i percorrer até TAM (que vale 10), mas tivermos apenas 2 pessoas cadastradas,
    o código ficará errado. Ele tem que percorrer o total de pessoas no vetor, que é
    definido pela variável quant (recebeu determinado incremento na função de registro) */
    for (i=0; i < quant; i++){
        printf("\n\t\tNome: %s", lista[i].nome);
        printf("\t\tIdade: %d\n", lista[i].idade);
        printf("\t\tSexo: %c\n", lista[i].sexo);
    }
}


int main(){

    int op;     // Variável op = opção escolhida
    
    do {        // Repetição faça-enquanto para controle de menu
        printf("\n1 - Cadastrar\n2 - Imprimir\n0 - Sair\n"); // Imprime as opções
        scanf("%d", &op);

        switch(op){  // Avalia o valor recebido por op
        case 0:     // Usuário quer sair do programa
            printf("Tchau!");
            break;
        case 1:     // Usuário deseja registrar pessoas
            RegistPeople();
            break;
        case 2:     // Usuário deseja ver dos dados na tela
            PrintPeople();
            break;
        default:   // Qualquer valor digitado que não seja as opções fornecidas
            printf("Opcao invalida.\n\n");
        }
       

    } while(op != 0); // Repita até qe o usuário digite zero, ou seja, que ele deseje sair
}

/*  --> ADICIONAL 

Nesse programa o arquivo foi salvo como .txt.. mas e se fosse em binário?

void SaveFile(){
    FILE *arq = fopen("list2.txt", "wb");
    if(arq){
        fprintf(arq, "%d\n", quant);
        fwrite(lista, sizeof(Pessoa), quant, arq)
        parâmetros: fwrite(quem queremos escrever nesse arquivo? (vetor inteiro), qual o tamanho de cada Pessoa?,
        quantas Pessoas eu quero escrever?, em qual arquivo eu quero escrever?);
        fclose(arq);

    FILE *arq = fopen("list2.txt", "rb");
    if(arq){
        fread(&quant, sizeof(int), quant, arq);  // lê quant diretamente em modo binário
        fread(lista, sizeof(Pessoa), quant, arq)
        parâmetros: fwrite(onde vou armazenar?, qual o tamanho de cada Pessoa?,
        quantas Pessoas eu quero escrever?, em qual arquivo eu quero escrever?);
        fclose(arq);
    }
}
*/
