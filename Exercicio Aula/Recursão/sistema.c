#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
}Aluno;

void imprimirMenu();
int buscaRA(Aluno turma[], int n, int RA);
void insereAluno(Aluno turma[], int n, int RA);
void imprimeTurma(Aluno turma[], int n);
void imprimeAluno(Aluno turma[], int i);
void removeAluno(Aluno turma[], int n, int p);
int getRA();

int main(){
    Aluno turmaLP[50];
    int op=-1, n = 0,RA,posicao;

    while(op != 5){
        system("clear");
        imprimirMenu();
        scanf("%d", &op);
        
        switch(op){
            case 1:
                if(n == 50){
                    printf("\nTurma Lotada.");
                }else{
                    RA = getRA();
                    if(buscaRA(turmaLP,n, RA)==-1){
                        insereAluno(turmaLP,n,RA);
                        n++;
                    }
                }
                break;
            case 2:
                if(n==0){
                    printf("Turma vazia!");
                }else{
                    imprimeTurma(turmaLP,n);
                }
                break;
            case 3:
                RA = getRA();
                posicao = buscaRA(turmaLP, n, RA); 
                if(posicao != -1){
                    imprimeAluno(turmaLP, posicao);
                }else{
                    printf("Aluno não encontrado!");
                }
                break;
            case 4:
                RA = getRA();
                posicao = buscaRA(turmaLP, n, RA); 
                if(posicao != -1){
                    removeAluno(turmaLP, n, posicao);
                    n--;
                }else{
                    printf("Aluno não encontrado!");
                }
                break;
        }

        printf("\n\n\n\n\n... Aperte ENTER para continuar ...");
        while(getchar() != '\n');
        getchar();
    }
    

    return 0;
}
void imprimirMenu(){
    printf("\nMenu");
    printf("\n1 - Insire Aluno");
    printf("\n2 - Imprime Turma");
    printf("\n3 - Busca Aluno Por RA");
    printf("\n4 - Remove Aluno");
    printf("\n5 - Finalizar\n\n");
}

int buscaRA(Aluno turma[], int n, int RA){
    for(int i = 0; i < n; i++){
        if(turma[i].RA == RA){
            return i;
        }
    }
    return -1;
}

void insereAluno(Aluno turma[], int n, int RA){
    printf("\nDigite o nome: ");
    getchar();
    fgets(turma[n].nome, sizeof(turma[n].nome), stdin);
    turma[n].nome[strlen(turma[n].nome)-1] = '\0';

    for(int i = 0; i < 3; i++){
        turma[n].notas[i] = -1;
        while(turma[n].notas[i] < 0){
           printf("\nDigite a nota da P%i: ", i+1);
            scanf("%f",&turma[n].notas[i]); 
        }
    }
    printf("\nFrequencia: ");
    scanf("%d", &turma[n].frequencia);
    turma[n].RA = RA;
}

void imprimeTurma(Aluno turma[], int n){
    for(int i = 0; i < n; i++){
        imprimeAluno(turma, i);
    }
}

void imprimeAluno(Aluno turma[], int i){
    printf("\nAluno %i",i+1);
    printf("\tNome: %s", turma[i].nome);
    printf("\tRA: %i", turma[i].RA);
    for(int j = 0; j < 3; j++){
       printf("\tNota P%i:  %.2f", j+1, turma[i].notas[j]);
    }
    printf("\tFrequência: %i", turma[i].frequencia);
}

int getRA(){
    int RA = 0;
    while(RA == 0){
        printf("\nDigite o RA: ");
        scanf("%i", &RA);
    }
    return RA;
}

void removeAluno(Aluno turma[], int n, int p){
    for(int i = p; i<n;i++){
        turma[i] = turma[i+1];
    }
}