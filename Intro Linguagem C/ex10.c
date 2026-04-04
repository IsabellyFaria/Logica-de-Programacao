#include <stdio.h>

int main(){
    //Variáveis
    float salario,total;
    int horas;
    //Entrada
    printf("Digite quanto ganha por hora:\n\t");
    scanf("%f", &salario);
    
    printf("Digite quantas horas foram trabalhadas:\n\t");
    scanf("%i", &horas);

    //Processamento
        //Calculo do valor total
    total = salario * horas;
    //Saída
    printf("Você irá receber R$ %.2f.\n",total);

    return 1;
}