#include <stdio.h>

int inverte(int n, int p0, int p);
int descobreP(int n);
int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    int resposta  = inverte(n, 0, descobreP(n));

    printf("\n%i",resposta);
    return 0;
}
int potencia(int n, int m){
    if(m == 0){
        return 1;
    }
    return n * potencia(n, m-1);
}
int descobreP(int n){
    int p = 0;
    while(n/potencia(10,p+1) != 0){
        p ++;
    }
    return p;
}
int inverte(int n, int p0, int p){
    if(p == 0){
        return ((n/potencia(10,p))*potencia(10,p0));
    }
    return ((n/potencia(10,p))*potencia(10,p0)) + inverte(n%potencia(10,p), p0+1, p-1);

}