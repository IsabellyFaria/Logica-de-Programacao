#include <stdio.h>

int main(){
    int numero = 0;
    while(numero <= 0 || numero > 10){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero < 0 || numero > 10){
            printf("Numero invalido");
        }
    }
    printf("Tabudada do %d\n", numero);
    for(int i = 1; i < 11; i++){
        printf("\t%d x %d = %d\n", numero, i, i*numero);
    }
}