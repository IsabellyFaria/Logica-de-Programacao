#include <stdio.h>
int main(){
    float n1, n2, divisao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    do{
        printf("O segundo numero nao pode ser zero. Digite novamente: ");
        scanf("%f", &n2);
    }while(n2 == 0);
    divisao = n1 / n2;
    printf("O resultado da divisao e: %.2f\n", divisao);
    return 1;
}