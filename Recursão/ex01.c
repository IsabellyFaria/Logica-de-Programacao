#include <stdio.h>

int soma(int n){
    if(n<=1){
        return n;
    }else{
        return n + soma(n-1);
    }
}
int main(){
    int resposta, numero = 0;
    while(numero < 1){
        printf("\nDigite um número: ");
        scanf("%i",&numero);
    }
    resposta = soma(numero);
    printf("\nA soma dos números de 1 à %i é %i", numero, resposta);

    return 0;
}