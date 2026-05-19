#include <stdio.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
int main(){
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%i", &n);

    resultado = fatorial(n);

    printf("\n%i! = %i", n, resultado);

    return 0;
}