#include <stdio.h>
int main(){
    int soma = 0, numero;

    for(int i = 0; i < 10; i++){
        printf("Digite um número:\n");
        scanf("%i", &numero);
        soma = soma + numero;
    }
    printf("Soma dos numeros é %i", soma);
    return 1;
}