#include <stdio.h>

int soma(int i[], int l, int n);
int main(){

    int i[] = {1,2,3,4,5,6,7,8,9,10};

    int len = sizeof(i)/sizeof(i[0]);

    int s = soma(i, len, 0);

    printf("\nSoma dos elementos do vetor: %i", s);
    return 0;
}

int soma(int i[], int l, int n){
    if(n<l){
        return i[n]+soma(i,l,n+1);
    }
    return 0;
}