#include <stdio.h>

int fatorial(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
int combinacao(int n, int r){
    return (fatorial(n)/(fatorial(r)*(n-r)));
}
int recebeVariavel(int minimo, char i){
    int a = minimo-1;
    while( a < minimo){
        printf("\nDigite um valor válido para %c: ", i);
        scanf("%i", &a);
    }
    return a;
}
int main(){
    int n, r;
    n = recebeVariavel(0,'n');
    r = recebeVariavel(1,'r');

    int resultado = combinacao(n,r);

    printf("\n%i tomado %i por vez tem %i combinações\n",n,r,resultado);

    return 0;
}