#include <stdio.h>

void naturais(int n, int l);
int main(){
    int numero = -1;
    while(numero<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &numero);
    }
    naturais(numero, 0);

    return 0;
}
void naturais(int n, int l){
    if(l <= n){
        if(l % 2 == 0){
        printf("\n%i", n-l);
        }
    
        naturais(n,l+1); 
    }
}