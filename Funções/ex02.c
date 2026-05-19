#include <stdio.h>

void dividir(int n1,int n2, int *quiociente, int *resto){
    int a1, a2;

    if(n1<0){
        a1 = n1*-1;
    }else{
        a1 = n1;
    }
    if(n2<0){
        a2 = n2* -1;
    }else{
        a2 = n2;
    }
    *quiociente = 0;
    *resto = a1;
    while(*resto >= a2){
        *resto -= a2;
        (*quiociente)++;
    }

    if(n1<0){
        *resto= -(*resto);
        if(n2>0){
            *quiociente = -(*quiociente);
        }
    }
    if(n2<0 && n1 > 0){
        *quiociente = -(*quiociente);
    }
    
}

int main(){
    int n1,n2 = 0;
    int quiociente = 0, resto;

    printf("Digite um numero inteiro: ");
    scanf("%i",&n1);

    while(n2 == 0){
        printf("Digite um outro numero: ");
        scanf("%i",&n2);
    }
    dividir(n1,n2, &quiociente, &resto);
    printf("%i/%i = %i com resto %i", n1,n2, quiociente, resto);
}