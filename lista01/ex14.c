#include <stdio.h>

int main(){
    //Variáveis
    float salario, comissao, valorVendas,total;
    int qtdCarros;
    //Entrada
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor da comissão por venda: R$ ");
    scanf("%f", &comissao);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f",&valorVendas);

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%i", &qtdCarros);

    //Processamento
    total = salario + (qtdCarros * comissao) + (valorVendas * 0.05);

    //Saída
    printf("O valor à ser pago para o vendedor será R$ %.2f", total);

    return 1;
}