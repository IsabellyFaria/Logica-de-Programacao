#include <stdio.h>
#include <stdlib.h>

int main(){
    int temperatura[365], menor, maior = 0, soma = 0, media, num;

    for(int i = 0; i < 365;i++){
        printf("\nDigite a temperatura do dia: ");
        scanf("%i", num);
        temperatura[i] = num;
        soma = soma + num;
        if(num > maior){
            maior = num;
        }
        if(num < menor || i == 0){
            menor = num;
        }
    }
    media = soma/365;
    printf("A temperatura média anual é %iºC\nA menor temperatura foi %iºC\nA maior temperatura foi %i ºC",media,menor,maior);
    
    return 1;
}