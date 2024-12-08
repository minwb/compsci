/* mostrar valores de n até 0 (decrescente) */

#include <stdio.h>

void imprimir(int x){
    if(x == 0)      // condição de parada
        printf("%d ", x);
    else{
        printf("%d ", x);
        imprimir(x - 1);
    }
}

int main(){
    
    int n;

    printf("Digite um valor para n: "); 
    scanf("%d", &n);

    imprimir(n);

    return 0;

}