#include <stdio.h>

int encontra(int vetor[], int l, int n, int nmenor);
int main(){
    int vetor[] = {2,3,5,7,8,1,3,7,8,6};
    int len = sizeof(vetor)/sizeof(vetor[0]);


    int menor = encontra(vetor, len, 0, vetor[0]);

    printf("\n%i\n",menor);

    return 0;
}
int menor(int n, int m){
    if(n < m){
        return n;
    }
    return m;
}
int encontra(int vetor[], int l, int n, int nmenor){
    if(l == n){
        return nmenor;
    }
    nmenor = menor(nmenor,vetor[n]);
    return menor(nmenor,encontra(vetor,l,n+1,nmenor));
}
