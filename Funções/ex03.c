#include <stdio.h>

float potencia(int n1,int n2){
    int  a2;
    float resultado = 1, a1;
    if(n2<0){
        a2 = -(n2);
        a1 = 1/(float)n1;
    }else{
        a2 = n2;
        a1 = n1;
    }
    for(int i = 0; i < a2; i++){
        
        resultado = resultado*a1;
    }
    return resultado;
}
int main(){
    int n1,n2;
    float resultado;

    printf("Digite um numero inteiro: ");
    scanf("%i",&n1);
    
    printf("Digite outro inteiro: ");
    scanf("%i",&n2);

    resultado = potencia(n1,n2);

    printf("%i**%i = %.2f",n1,n2,resultado);

    return 0;
}