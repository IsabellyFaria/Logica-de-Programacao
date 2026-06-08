#include <stdio.h>

int tribonatti(int n);
int main(){
    int numero = -1, nesimo;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    nesimo = tribonatti(numero);

    printf("\nO número na posição %i da sequencia de tribonatti é %i ", numero, nesimo);

    return 0;
}
int tribonatti(int n){
    if(n == 0 || n == 1){
        return 0;
    }else if(n == 2 || n < 0){
        return 1;
    }
    return tribonatti(n -1) + tribonatti(n-2) + tribonatti(n-3);
}