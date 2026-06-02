#include <stdio.h>
int main(){
    //Variáveis
    int matriz[3][4], vetor[3];
    int soma = 0, somaLinha;

    //Leitura da Matriz
    printf("Leitura da Matriz 3x4:\n");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 4; j++){
            printf("\tDigite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    }
    printf("Leitura Finalizada!\n\n\n");

    //Processamento da Matriz
    for(int i = 0; i < 3; i++){

        //Zerar a soma da linha para cada linha
        somaLinha = 0;

        //Realizar soma da linha
        for(int j = 0; j < 4; j++){
            somaLinha = somaLinha + matriz[i][j];
        }

        //Acumular a soma da linha na soma total
        soma = soma + somaLinha;

        //Armazenar a soma da linha no vetor
        vetor[i] = somaLinha;
    }

    //Saída dos resultados
    printf("Vetor equivalente à soma das linhas:\n");
    for(int i = 0; i < 3; i++){
        printf("\tPosição %d: %d \n", i, vetor[i]);
    }
    printf("Soma total dos elementos da matriz: %i\n", soma);
}