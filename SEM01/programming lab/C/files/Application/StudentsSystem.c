/* Sistema de Gestão de Estudantes

Funcionalidades:

1- Adicionar Estudantes:
O programa pede ao usuário para inserir informações de um novo estudante e armazena esses dados em um arquivo.

2- Listar Estudantes:
O programa lê os dados do arquivo e exibe a lista de todos os estudantes armazenados.

3- Atualizar Dados de um Estudante:
O programa lê os dados do arquivo, encontra o estudante com base em um nome ou ID, permite ao usuário atualizar suas informações e grava as 
alterações de volta no arquivo.


Estrutura do Programa:

	- Definição da Struct: A struct Estudante armazena os detalhes do estudante, como nome, idade, curso e nota.

	- Uso de Ponteiros: Os dados dos estudantes são manipulados por meio de ponteiros para structs, permitindo a 	
    manipulação dinâmica dos dados.

	- Operações de Arquivo: O programa abre um arquivo para gravar, ler e atualizar as informações dos 	estudantes, utilizando funções de 
    manipulação de arquivos em C (fopen, fwrite, fread, fclose).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct { // estrutura que contém dados de cada estudante
    char name[100];
    char course[100];
    char ID[50];
    int age;
    float grade;
} Students;

Students list[TAM]; // vetor que define o máximo de estudantes que podem ser cadastrados
int quant = 0;  // variável que controla a quantidade de alunos cadastrados

int RegisterStudent() {     //fFunção para registrar estudantes
    if (quant < TAM) { // verificação de armazenamento do vetor
        
        Students stu; // variável do tipo Estudantes para cadastro dos dados
        
        scanf("%*c"); // limpeza de buffer 
        printf("\nStudent's name: ");  
        fgets(stu.name, 100, stdin);
        stu.name[strcspn(stu.name, "\n")] = 0; // remove o newline
        printf("Course: ");
        fgets(stu.course, 100, stdin);
        stu.course[strcspn(stu.course, "\n")] = 0; // remove o newline
        printf("ID: ");
        fgets(stu.ID, 50, stdin);
        stu.ID[strcspn(stu.ID, "\n")] = 0; // remove o newline
        printf("Age: ");
        scanf("%d", &stu.age);
        printf("Grade: ");
        scanf("%f", &stu.grade);
        scanf("%*c");
        
        list[quant] = stu; // a lista recebe a quantidade cadastrada
        quant++;  
        return 1; // cadastro realizado corretamente
    } else {
        printf("Isn't possible to register new students\n"); // erro ao cadastrar pois o vetor está cheio
        return 0; // vetor cheio
    }
}

void PrintStudent() {       // função para imprimir estudantes
    for (int i = 0; i < quant; i++) {
        printf("\n\t\tName: %s", list[i].name);
        printf("\n\t\tCourse: %s", list[i].course);
        printf("\n\t\tID: %s", list[i].ID);
        printf("\n\t\tAge: %d", list[i].age);
        printf("\n\t\tGrade: %.2f\n", list[i].grade);
    }
}

void SaveFile() {       // função para salvar estudantes no arquivo
    FILE *arq = fopen("list.txt", "w");
    if (arq) { 
        for (int i = 0; i < quant; i++) {
            fprintf(arq, "%s\n", list[i].name);
            fprintf(arq, "%s\n", list[i].course);
            fprintf(arq, "%s\n", list[i].ID);
            fprintf(arq, "%d\n", list[i].age);
            fprintf(arq, "%.2f\n", list[i].grade);
        }
        fclose(arq); 
    } else {
        printf("ERROR: The file could not be opened. \n\n");
    }
}

int main(){

    int opt; 
    do {
        printf("\n\tMenu\n");
        printf("1 - Register\n2 - Print\n0 - Sair\n");
        printf("Choose an option: ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                RegisterStudent();
                break;
            case 2:
                PrintStudent();
                break;
            case 0:
                exit(0);  // encerra o programa com sucesso
                break;
            default:
                printf("Invalid. Try again.\n");
                break;
        }
    } while(opt != 0);
    
    return 0;
}
