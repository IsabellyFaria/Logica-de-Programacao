#include <stdio.h>

int main() {
    //Variáveis
    float raio, area;

    //Entradas
    printf("Digite o raio do círculo em centímetros: ");
    scanf("%f", &raio);

    //Processamento
    area = 3.14 * raio * raio;

    //Saída
    printf("A área do círculo é: %.2f\n cm²", area);

    return 0;
}
