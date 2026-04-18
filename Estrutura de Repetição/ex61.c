#include <stdio.h>
int main(){
    int soma = 0, numero, media;

    for(int i = 0; i < 10; i++){
        printf("Digite um número:\n");
        scanf("%i", &numero);
        soma = soma + numero;
    }
    media = soma/10;
    printf("Média dos numeros é %i\n", media);
    return 1;
}