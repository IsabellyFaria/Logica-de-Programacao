#include <stdio.h>

int primo(int n){
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont>2){
        return 0;
    }else{
        return 1;
    }
}

int contaPrimo(int x, int y){
    int cont = 0;
    for(int i = x+1; i < y; i++){
        cont += primo(i);
    }
    return cont;
}

int main(){
    int x, y;

    printf("Digite um número: ");
    scanf("%i", &x);
    y = x;
    while(y <= x){
        printf("\nDigite um número maior que %i", x);
        scanf("%i", &y);
    }

    int resultado = contaPrimo(x,y);

    printf("\nEntre %i e %i existem %i numero(s) primos",x,y,resultado);

    return 0;
}