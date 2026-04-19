#include <stdio.h>
int main(){
    int A[10], X, M[10];

    printf("Lendo Vetor A:\n");
    for(int i = 0; i<10; i++){
        printf("\n\tInsira o %iº número: ", i+1);
        scanf("%i", &A[i]);
    }
    
    printf("\nDigite um número: ");
    scanf("%i", &X);

    for(int j = 0; j<10; j++){
        M[j] = A[j] * X; 
    }
    printf("Numéros do vetor M:");
    for(int y =0; y<10; y++){
        printf("\t%i\n",M[y]);
    }


    return 1;
}