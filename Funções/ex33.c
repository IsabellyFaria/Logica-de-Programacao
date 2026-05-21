#include <stdio.h>

int divisor(int n1, int n2){
    return n1 % n2 == 0;
}
int* calculaDivisores(int n){
    static int divisores[1000];
    int cont =0;
    for(int i = 1; i <= n; i++){
        if(divisor(n,i)){
            divisores[cont]=i;
            cont++;
        }
    }
    return divisores;
}
int main(){
    int n=0;
    while(n <=0){
        printf("Digite um número: ");
        scanf("%i", &n);
    }

    int *resposta = calculaDivisores(n);

    printf("\n Os divisores de %i são:", n);
    for(int i = 0; i < n; i++){
        printf("\n\t* %i", resposta[i]);
        if(resposta[i]==n){
            break;
        }
    }
}