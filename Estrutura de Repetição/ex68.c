#include <stdio.h>
int main(){
    int valor=0;
    float media, preco, soma=0;
    while(valor <=0){
        printf("Quantas mercadorias tem no estoque? ");
        scanf("%i", &valor);
    }
    for(int i = 0; i < valor; i++){
        printf("Digite o valor da %iª mercadoria: ", i+1);
        scanf("%f", &preco);
        while(preco < 0){
             printf("Digite o valor válido para a %iª mercadoria: ", i+1);
             scanf("%f", &preco);
        }
        soma = soma + preco;
    }
    media = soma/valor;
    printf("O valor total é R$%.2f.\nO valor valor da média dos preços é R$%.2f",soma, media);
    return 1;
}