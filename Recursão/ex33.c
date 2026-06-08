#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100
void gerarVetorAleatorio(int vetor[], int tamanho);
void inverteVetor(int vetor[], int len, int n);
void imprimirVetor(int vetor[], int tamanho);

int main(){
    int vetor[100];
    gerarVetorAleatorio(vetor,100);
    printf("\nVetor original: \n");
    imprimirVetor(vetor, 100);

    inverteVetor(vetor, 100, 0);

    printf("\nVetor invertido: \n");
    imprimirVetor(vetor,100);

    return 0;
}

void gerarVetorAleatorio(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand()%99;
    }
}
void inverteVetor(int vetor[], int len, int n){
    if(n <= (len/2)){
        int copia = vetor[(len-1)-n];
        vetor[(len-1)-n] = vetor[n];
        vetor[n] = copia;
         
        inverteVetor(vetor, len, n+1);
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf(" ");
        }
    }
}
