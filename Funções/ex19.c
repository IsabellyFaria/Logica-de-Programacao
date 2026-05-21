#include <stdio.h>
#include <math.h>

int binario(int numero){
    int resultado=0, i=0;
    while(numero>0){
        int resto = numero%2;
        numero = numero/2;
        resultado += resto * pow(10,i);
        i++;
    }
    return resultado;
}

int main(){
    int n = -1;
    while(n<0){
       printf("Digite um número inteiro positivo: ");
       scanf("%i",&n);
    }
    int resultado = binario(n);

    printf("\n%i",resultado);
}