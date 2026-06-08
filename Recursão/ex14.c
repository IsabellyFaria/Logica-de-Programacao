#include <stdio.h>

void ImprimeSerie(int i, int j, int k);
int main(){
    int i, j,k;
    printf("\nValor i: ");
    scanf("%d", &i);
    j = i;
    k = i;
    while (j <= i && k >= j)
    {
        printf("\nValor j: ");
        scanf("%d", &j);
        printf("\nValor k: ");
        scanf("%d", &k);
    }

    ImprimeSerie(i,j,k);

    return 0;
}
void ImprimeSerie(int i, int j, int k){
    if(i <= j ){
        printf("\n%i",i);
        ImprimeSerie(i+k, j, k);
    }
    
}