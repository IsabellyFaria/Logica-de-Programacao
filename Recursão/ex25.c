#include <stdio.h>

int tetrabonatti(int n);
int main(){
    int numero = -1, nesimo;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    nesimo = tetrabonatti(numero);

    printf("\nO número na posição %i da sequencia de tetrabonatti é %i ", numero, nesimo);

    return 0;
}
int tetrabonatti(int n){
    if(n >=0 && n <=2){
        return 0;
    }else if(n ==3){
        return 1;
    }
    return tetrabonatti(n -1) + tetrabonatti(n-2) + tetrabonatti(n-3) + tetrabonatti(n-4);
}