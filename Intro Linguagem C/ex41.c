#include <stdio.h>

int main(){
    //Variáveis
    int numero1,numero2;
    //Entradas
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    //Processamento
    if (numero1 > numero2){
        printf("Primeiro é maior.\n");
    }
    else if (numero2 > numero1){
        printf("Segundo é maior.\n");
    }
    else{
        printf("Números são iguais.\n");
    }

    return 1;
}