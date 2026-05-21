#include <stdio.h>

int valor(int  i, int f[]){
    return f[i-2]+f[i-1];
}
void fibonatti(int t, int f[]){
    f[0]=0;
    f[1]=1;
    for(int i = 2; i<t;i++){
        f[i]=valor(i, f);
    }
}
int main(){
    int t=0;
    while(t<=0){
        printf("\nDigite o tamanho da sequencia: ");
        scanf("%i",&t);
    }
    
    int f[t];
    
    fibonatti(t,f);

    printf("\n\n");
    for(int i = 0; i < t; i++){
        printf("%i",f[i]);
    }
}