#include <stdio.h>
int main(){
    int cont = 0, numero, a[20],tamanho=0;

    for(int i = 0; i < 20; i++){
        printf("\nDigite um número para o vetor: ");
        scanf("%i", &numero);
        a[i] = numero;
    }

    printf("\n\nDigite um número para remover do vetor: ");
    scanf("%i", &numero);
    for(int i = 0; i < 20; i++){
        if(a[i]!=numero){
            tamanho++;
        }
    }

    int b[tamanho];
    for(int i = 0; i < 20; i++){
        if(a[i]!=numero){
            b[cont] = a[i];
            cont++;            
        }
    }
    printf("O novo vetor é:");
    for(int i = 0; i < tamanho; i++){
        printf("\n\t%i", b[i]);
    }
    return 1;
}