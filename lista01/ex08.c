#include <stdio.h> 

int main(){
    //Variáveis
    float metro, centimetro;

    //Entradas
    printf("Digite um número em metros");
    scanf("%f", &metro);
    //Processamento
    centimetro = metro * 100;

    //Saída
    printf("Esse valor equivale à %fcm",centimetro);
    
    return 1;
}