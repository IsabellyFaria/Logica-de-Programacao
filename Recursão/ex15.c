#include <stdio.h>

float serie(int n);
int main(){
    int n = 0;
    while(n <=0){
        printf("\nValor para n: ");
        scanf("%d",&n);
    }
    float soma = serie(n);

    printf("\nO valor da soma da série é: %.2f", soma);
}
float serie(int n){
    if(n == 1){
        return 2;
    }
    return ((1+((float)n*n))/n) + serie(n-1);
}