/* mostrar valores de 0 até n (crescente) */

#include <stdio.h>

void imprimir(int x){
    if (x >= 0) {  
        imprimir(x - 1);  
        printf("%d ", x);  
    }
}

int main(){
    
    int n;

    printf("Digite um valor para n: "); 
    scanf("%d", &n);

    imprimir(n);

    return 0;
}
