#include <stdio.h>

int potencia(int k, int n);
int main(){
    int numero1 = -1, numero2 = -1, pow;
    while(numero1<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero1);
    }
    while(numero2<0){
        printf("\nDigite outro número positivo: ");
        scanf("%i", &numero2);
    }
    pow = potencia(numero1, numero2);

    printf("\n%i elevado à %i é igual à %i",numero1, numero2, pow);

    return 0;
}
int potencia(int k, int n){
    if(n == 1){
        return k;
    }else{
        return k*potencia(k, n-1);
    }
}