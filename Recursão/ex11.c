#include <stdio.h>

void imprime(int i[], int n, int len);
int main(){
    int i[] = {1,2,3,4,5,6,7,8,9,10};

    int len = sizeof(i)/sizeof(i[0]);

    imprime(i, 0, len);


    return 0;
}

void imprime(int i[], int n, int len){
    if(n<len){
        printf("%i ", i[n]);
        imprime(i, n+1, len);
    }else{
        printf("\n")
    }
}