#include <stdio.h>

int main(){
    //Variáveis
    float  custoFabrica, porcentagemDistribuidor, impostos, custoConsumidor;
    //Entrada
    printf("Digite o custo de fábrica do carro:\n\tR$ ");
    scanf("%f",&custoFabrica);
    //Processamento
        //Calcular valor das porcentagens
    porcentagemDistribuidor = custoFabrica * 0.28;
    impostos = custoFabrica * 0.45;
        //Calcular o valor para o consumidor
    custoConsumidor = custoFabrica + porcentagemDistribuidor + impostos;
    //Saída
    printf("O custo para o consumidor será de R$ %.2f", custoConsumidor);

    return 1;
}