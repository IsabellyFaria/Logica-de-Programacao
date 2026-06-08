#include <stdio.h>

int binario(int n, int p);
int main(){
    int n;
    printf("Digite um número na base decimal: ");
    scanf("%d", &n);

    int b = binario(n,0);

    printf("Esse número em binário é escrito: %i", b);
    
}
int potencia(int n, int m){
    if(m == 0){
        return 1;
    }
    return n * potencia(n, m-1);
}
int binario(int n, int p){
    int c = n % 2;
    if(n == 1 || n == 0){
        return n * potencia(10, p);
    }
    return (c * potencia(10,p))+ binario(n/2, p+1);
}