#include <stdio.h>

int quadrado(int n){
    return n*n;
}
int verificaQuadrado(int n1, int n2){
    return n1 < n2;
}
int executaVarios(int n){
    for(int i = 0; i < n; i++){
        if(verificaQuadrado(n, quadrado(i))){
            return i;
        }
    }
}
int main(){
    int n = -1;
    while(n<0){
        printf("\nDigite um número inteiro positivo: ");
        scanf("%i", &n);
    }
    int resposta =executaVarios(n);

    printf("\nO numero %i tem raiz quadrada maior do que %i", resposta, n);

    return 0;
}