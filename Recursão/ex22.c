#include <stdio.h>

int fibg(int f0, int f1, int n);
int main(){
    int n1 = -1,n2 = -1, n3=-1;
    while(n1<0){
        printf("\nDigite um número positivo: ");
        scanf("%i", &n1);
    }
    while(n2<0){
        printf("\nDigite outro número positivo: ");
        scanf("%i", &n2);
    }
    while(n3<0){
        printf("\nDigite outro número positivo: ");
        scanf("%i", &n3);
    }

    int fn = fibg(n1,n2,n3);

    printf("O valor do numero de posição %i nessa sequencia é %i", n3, fn);

    return 0;
}

int fibg(int f0, int f1, int n){
    if(n == 0){
        return f0;
    }else if(n == 1){
        return f1;
    }else if(n < 0){
        return 0;
    }else{
        return fibg(f0,f1,n-1) + fibg(f0,f1,n-2);
    }
}