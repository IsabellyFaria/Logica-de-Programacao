#include <stdio.h>

int fibonatti(int n);
int main(){
    int numero = -1, nesimo;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    nesimo = fibonatti(numero);

    printf("\nO número na posição %i da sequencia de fibonatti é %i ", numero, nesimo);

    return 0;
}
int fibonatti(int n){
    if(n == 3 || n == 2){
        return 1;
    }else if(n <= 1){
        return 0;
    }
    return fibonatti(n -1) + fibonatti(n-2);
}