#include <stdio.h>

int fatorialDuplo(int n){
    if(n <= 1){
        return 1;
    }else if(n % 2 == 1){
        return n * fatorialDuplo(n-1);
    }else{
        return 1 * fatorialDuplo(n-1);
    }
}
int main(){
    int numero = -1, fat;
    while(numero<0 || numero % 2 == 0){
        printf("\nDigite um número positivo e impar: ");
        scanf("%i", &numero);
    }
    fat = fatorialDuplo(numero);

    printf("\nO fatorial duplo de %i é %i",numero, fat);

    return 0;
}