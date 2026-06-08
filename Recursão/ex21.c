#include <stdio.h>

int sequencia(int n);
int main(){
    int n = 0;
    while(n <= 0){
        printf("\nNumero inteiro maior que 0: ");
        scanf("%d", &n);
    }

    int fn  = sequencia(n);

    printf("\n Valor calculado foi: %i", fn);

    return 0;
}

int sequencia(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return (2 * sequencia(n-1))+(3*sequencia(n-2));
}