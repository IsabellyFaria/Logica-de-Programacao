#include <stdio.h>

int soma1(int x){
    if(x == 1){
        return 1;
    }else{
        return x + soma1(x-1);
    }
}
int main(){
    int x, r;
    printf("Digite um numero: ");
    scanf("%i", &x);

    r = soma1(x);

    printf("\nA soma dos numeros de 1 até %i é %i\n",x,r);
    return 0;
}