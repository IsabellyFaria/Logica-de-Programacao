#include <stdio.h>

int main(){
    //Variáveis
    float lado, area, dobroArea;

    //Entrada
    printf("Digite o valor do lado de um quadrado em metros:\n\t");
    scanf("%f", &lado);
    //Processamento
        //Calculo da área
    area = lado * lado;
    dobroArea = area * 2;

    //Saída
    printf("O dobro da área é %.2f m",dobroArea);

    return 1;
}