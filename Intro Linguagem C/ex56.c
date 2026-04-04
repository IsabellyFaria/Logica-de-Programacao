#include <stdio.h>

int main(){
    //Variáveis
    int a, b, operacao;
    float resultado;
    //Entrada
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Digite a operacao:\n1 - Adicao\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n");
    scanf("%d", &operacao);
    //Processamento
    if (operacao == 1){
        resultado = a + b;
    }
    else if (operacao == 2){
        resultado = a - b;
    }
    else if (operacao == 3){
        resultado = (float)a / b;
    }
    else if (operacao == 4){
        resultado = a * b;
    }
    //Saída
    printf("Resultado: %.2f\n", resultado);

    return 1;
}