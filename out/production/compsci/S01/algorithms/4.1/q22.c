/* A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais 
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. 
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e 
escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham 
sido trabalhadas (considere que o mês possua 4 semanas exatas).  */

#include <stdio.h>

int main(){
    
    int horaTrab;
    float salHora, valCalc;

    
    printf("Digite o valor por hora trabalhada: ");
    scanf("%f", &salHora);

    if (horaTrab <= 160){
        valCalc = horaTrab * salHora;
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horaTrab);
    printf("Salario total do mes: %.2f", valCalc);
    } else {
        valCalc = 160 * salHora;
        valCalc = valCalc + (valCalc * 0.50);
        printf("Salario total do mes: %.2f", valCalc);
    }

    return 0;
}