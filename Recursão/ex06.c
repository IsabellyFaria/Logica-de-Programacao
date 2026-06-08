#include <stdio.h>

int Multip_Rec(int n1, int n2);
int main(){
    int numero1 = -1, numero2 = -1, mult;
    printf("\nDigite um número inteiro: ");
    scanf("%i", &numero1);
    printf("\nDigite outro número inteiro: ");
    scanf("%i", &numero2);
    
    mult = Multip_Rec(numero1, numero2);

    printf("\n%i x %i = %i",numero1, numero2, mult);

    return 0;
}

int Multip_Rec(int n1, int n2){
    if(n1 == 0 || n2 == 0){
        return 0;
    }
    int multiplicador = 1;
    if(n1<0){
        multiplicador = -1;
    }

    return n2*multiplicador + Multip_Rec(n1-(multiplicador*1), n2);
}