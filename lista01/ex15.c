#include <stdio.h>

int main(){
    //Variáveis
    float fahrenheit, celcius;
    //Entradas
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Processamento
    celcius = (5 * (fahrenheit - 32))/9;

    //Saída
    printf("Valor equivale à %.2fº\n",celcius);

    return 1;
}