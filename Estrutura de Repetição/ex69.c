#include <stdio.h>
int main(){
    int valor=0;
    float media, preco, soma=0;
    char continuar = 'S';

    while(continuar == 'S'){
         valor++;
         printf("Digite o valor da %iª mercadoria: ", valor);
         scanf("%f", &preco);
         while(preco < 0){
              printf("Digite o valor válido para a %iª mercadoria: ", valor);
              scanf("%f", &preco);
        }
        soma = soma + preco;
        printf("Mais mercadorias?S/N\n");
        scanf(" %c", &continuar);
    }
    media = soma/valor;
    printf("O valor total é R$%.2f.\nO valor valor da média dos      preços é R$%.2f",soma, media); 
    return 1;
}