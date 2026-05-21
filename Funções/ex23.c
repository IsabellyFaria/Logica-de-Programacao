#include <stdio.h>

int divisao(int n){
    if(n % 13 == 5){
        return 1;
    }else{
        return 0;
    }
}
int conta5(int x, int y){
    int cont = 0;
    for(int i = x; i < y; i++){
        cont += divisao(i);
    }
    return cont;
}

int main(){
    int x=0, y=0;
    while(x>= y){
        printf("\nDigite um valor para x: ");
        scanf("%i",&x);
        printf("\nDigite um valor maior para y: ");
        scanf("%i", &y);
    }
    int resposta = conta5(x,y);

    printf("\n\nEntre %i e %i, existem %i números que quando divididos por 13, tem resto 5\n",x,y,resposta);
}