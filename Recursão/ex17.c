#include <stdio.h>

int fatorial(int n){
    if(n <= 1){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}
float fatorialQuaduplo(int n){
    return ((float)fatorial(2*n)/fatorial(n));
}
int main(){
    int numero = -1, fat;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    fat = fatorialQuaduplo(numero);

    printf("\nO fatorial de %i é %.2d",numero, fat);

    return 0;
}