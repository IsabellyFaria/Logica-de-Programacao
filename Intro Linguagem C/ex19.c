#include <stdio.h>

int main(){
    //Variáveis
    float comprimento, altura, largura, area, azulejos;
    
    //Entrada
    printf("Digite as seguintes dimensões da cozinha (em metros):");
    printf("\n\t1. Comprimento: ");
    scanf("%f", &comprimento);

    printf("\n\t2. Largura: ");
    scanf("%f", &largura);

    printf("\n\t3. Altura: ");
    scanf("%f", &altura);

    //Processamento
    area = comprimento * largura * altura;

    azulejos = area / 1.5;

    //Saída
    printf("Serão necessárias %.2f caixas de azulejo", azulejos);

    return 1;
}