#include <stdio.h>

int primo(int n){
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    if(cont>2){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n, prim;

    printf("Digite um número: ");
    scanf("%i",&n);
    prim = primo(n);

    printf("\n%i", prim);
    return 0;
}