#include <stdio.h>


int multiplicar(int n1, int n2){
    int resultado;
    for(int i = 0; i < n2; i++){
        resultado += n1;
    }
    return resultado;
}

int main(){
    int n1,n2;

    printf("Digite um numero inteiro: ");
    scanf("%i",&n1);
    
    printf("Digite outro inteiro: ");
    scanf("%i",&n2);

    int n3 = multiplicar(n1,n2);

    printf("%i x %i = %i\n", n1,n2,n3);

    return 0;
}

