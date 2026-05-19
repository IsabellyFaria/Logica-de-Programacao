#include <stdio.h>
#include <math.h>

int inverter(int n){
    int digito, resposta;
    while(n!=0){
        digito = n % 10;
        resposta = (resposta*10)+ digito;
        n = n/10;
    }
    return resposta;
}
int main(){
    int n, resposta;
    printf("Digite um numero:");
    scanf("%i",&n);
    resposta = inverter(n);
    printf("\n%i", resposta);
    return 0;
}