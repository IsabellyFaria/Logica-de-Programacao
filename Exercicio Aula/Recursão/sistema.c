#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
}Aluno;

void imprimirMenu()
int buscaRA(Aluno turma[], int n, int RA)
void insereAluno(Aluno turma[], int n, int RA)
void imprimeTurma(Aluno turma[], int n)

int main(){
    Aluno turmaLP[50];
    int op, n =0;
    system("clear");
    imprimirMenu();
    scanf("%d", &op);
    
    switch(op){
        case 1:
        if(n == 50){
            printf("\nTurma Lotada.");
        }else{
            printf("\nRA: ");
            scanf("%d", &RA);
            if(!buscaRA(turmaLP,n, RA)){
                insereAluno(turmaLP,n,RA);
                n++;
            }
        }
        case 2:
            if(n==0){
                printf("Turma vazia!");
            }else{

            }
    }

    return 0;
}
void imprimirMenu(){
    printf("\nMenu");
    printf("\n1 - Insire Aluno");
    printf("\n2 - Imprime Turma");
    printf("\n3 - Busca Aluno Por RA");
    printf("\n4 - Remove Aluno");
    printf("\n5 - Finalizar");
}
int buscaRA(Aluno turma[], int n, int RA){
    for(int i = 0; i < n; i++){
        if(turma[i].RA == RA){
            return 1;
        }
    }
    return 0;
}
void insereAluno(Aluno turma[], int n, int RA){
    printf("\nDIgite o nome: ");
    getchar();
    fgets(turma[n].nome, sizeof(turma[n].nome), stdin);
    turma[n].nome[strlen(turma[n].nome)-1] = '\0';

    for(int i = 0; i < 3; i++){
        turma[n].notas[i] = -1;
        while(turma[n].notas[i] < 0){
           printf("Digite a nota da P%i", i+1);
            scanf("%f",&turma[n].notas[i]); 
        }
    }
    printf("\nFrequencia: ");
    scanf("%d", &turma[n].frequencia);
    turma[n].RA = RA;
}
void imprimeTurma(Aluno turma[], int n){
    for(int i = 0; i < n; i++){
        printf("\nAluno %i",i+1);
        printf("\tNome: %s", alun)
    }
}