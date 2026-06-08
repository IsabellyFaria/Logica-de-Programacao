#include <stdio.h>

int SomaSerie(int i, int j, int k);
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

    int soma = SomaSerie(i,j,k);

    printf("\n Soma da série é igual à %i", soma);

    return 0;
}
int SomaSerie(int i, int j, int k){
    if(i == j){
        return j;
    }else if(i>j){
        return 0;
    }
    return i + SomaSerie(i+k, j, k);
}