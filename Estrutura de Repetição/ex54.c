#include <stdio.h>
int main(){

    int numero = 0;

    while(!(numero > 0)){
        printf("Digite um Numero: ");
        scanf("%d", &numero);
        if(numero<0){
            printf("Numero Inválido!");
        }
    }
    printf("Os numeros entre 1 e %i são: \n",numero);
    for(int i = 1; i < numero+1; i++ ){
        printf("\t%i\n",i);
    }
    return 1;
}