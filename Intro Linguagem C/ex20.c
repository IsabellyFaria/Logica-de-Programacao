#include <stdio.h>

int main(){
    //Variáveis
    float odometroInicio, odometroFinal, combustivelGasto, consumoMedio, lucro, recebido;
    //Entrada
    printf("Digite o odômetro no início da viagem: ");
    scanf("%f", &odometroInicio);

    printf("Digite o odômetro no final da viagem: ");
    scanf("%f", &odometroFinal);

    printf("Digite a quantidade de combustível gasto (em litros): ");
    scanf("%f", &combustivelGasto);
    
    printf("Digite o valor recebido pelas corridas: ");
    scanf("%f", &recebido);
    
    //Processamento
    consumoMedio = (odometroFinal - odometroInicio) / combustivelGasto;
    lucro = recebido - (combustivelGasto * 3.5); //假设每升汽油价格为3.5元

    //Saída
    printf("Consumo médio: %.2f km/l\n", consumoMedio);
    printf("Lucro: R$ %.2f\n", lucro);

    return 0;
}