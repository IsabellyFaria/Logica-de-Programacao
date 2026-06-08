#include <stdio.h>

int cubos(int n);
int main(){
    int numero = -1, cubosSoma;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    cubosSoma = cubos(numero);

    printf("\nO a soma dos cubos de 1 à de %i é %i",numero, cubosSoma);

    return 0;
}
int pow3(int n){
    return n * n * n;
}
int cubos(int n){
    if(n==1){
        return 1;
    }else{
        return pow3(n)+cubos(n-1);
    }
}
