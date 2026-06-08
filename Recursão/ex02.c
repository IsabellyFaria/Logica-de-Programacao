#include <stdio.h>

int fatorial(int n){
    if(n <= 1){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}
int main(){
    int numero = -1, fat;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    fat = fatorial(numero);

    printf("\nO fatorial de %i é %i",numero, fat);

    return 0;
}