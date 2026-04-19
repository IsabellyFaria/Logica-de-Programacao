#include <stdio.h>

int main(){
    int vet[50], numero[50][50];
    int cont = 0, contido;

    // Inicializa matriz com -1 (para evitar lixo)
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
            numero[i][j] = -1;
        }
    }

    //Entrada da matriz
    for(int i = 0; i < 50; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%i", &vet[i]);
    }

    //Processamento
    for(int i = 0; i < 50; i++){
        contido = 0;

        // Verifica se já foi registrado
        for(int k = 0; k < cont; k++){
            if(vet[i] == numero[k][0]){
                contido = 1;
                break;
            }
        }

        if(contido == 0){
            numero[cont][0] = vet[i];
            int contNumero = 1;

            for(int j = 0; j < 50; j++){
                if(vet[i] == vet[j]){
                    numero[cont][contNumero] = j;
                    contNumero++;
                }
            }

            cont++;
        }
    }

    // Saída
    printf("\nResultados:\n");
    for(int i = 0; i < cont; i++){
        printf("O numero %i aparece nas posicoes:\n", numero[i][0]);
        for(int j = 1; j < 50; j++){
            if(numero[i][j] == -1){
                break;
            }
            printf("\t%i\n", numero[i][j]);
        }
    }

    return 0;
}