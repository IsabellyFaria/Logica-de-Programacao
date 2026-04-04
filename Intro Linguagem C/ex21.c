#include <stdio.h>

int main(){
    // Variáveis
    float comprimentoPista, consumo, litrosNecessarios;
    int totalVoltas, reabastecimentos;
    float comprimentoKm, voltasPorTrecho, distancia;

    // Entrada
    printf("Digite o comprimento da pista (em metros): ");
    scanf("%f", &comprimentoPista);

    printf("Digite o numero total de voltas: ");
    scanf("%d", &totalVoltas);

    printf("Digite o numero de reabastecimentos desejados: ");
    scanf("%d", &reabastecimentos);

    printf("Digite o consumo do carro (km/l): ");
    scanf("%f", &consumo);

    // Processamento
    comprimentoKm = comprimentoPista / 1000;
    voltasPorTrecho = (float)totalVoltas / (reabastecimentos + 1);
    distancia = voltasPorTrecho * comprimentoKm;
    litrosNecessarios = distancia / consumo;

    // Saída
    printf("Litros necessarios ate o primeiro reabastecimento: %.2f L\n", litrosNecessarios);

    return 0;
}