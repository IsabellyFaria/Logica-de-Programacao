#include <stdio.h>

int main(){
    //Variáveis
    float potencia, largura, comprimento, area;

    int quantidadeLampadas;
    //Entrada
    printf("Digite a potência da lâmpada (em watts): ");
    scanf("%f", &potencia);

    printf("Digite a largura do cômodo (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do cômodo (em metros): ");
    scanf("%f", &comprimento);
    //Processamento
    area = largura * comprimento;

    quantidadeLampadas = (area * 18) / potencia;

    //Saída
    printf("Serão necessárias %i lâmpada(s) para esse cômodo.\n", quantidadeLampadas);

    return 1;
}