/*  Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem 
os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração 
do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.  */

#include <stdio.h>

int main(){
    
    int horaInicio, horaFinal, durJogo;

    printf("Inicio do jogo (somente as horas): ");
    scanf("%d", &horaInicio); 

    printf("Termino do jogo (somente as horas): ");
    scanf("%d", &horaFinal);

    if (horaFinal >= horaInicio){
        durJogo = horaFinal - horaInicio;
    } else {
        durJogo = (24 - horaInicio) + horaFinal; // reset das horas + horas depois da 12 AM.
    }

    printf("Duracao do jogo: %d", durJogo);

    return 0;
}