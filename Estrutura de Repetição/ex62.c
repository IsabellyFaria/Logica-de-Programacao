#include <stdio.h>
int main(){
    int alunos;
    float soma=0, media, nota;
    printf("Quantos alunos tem na turma?");
    scanf("%i", &alunos);
    for(int i = 0; i < alunos; i++){
        printf("Digite a nota do %iº aluno", i+1);
        scanf("%f",&nota);
        soma=soma+nota;
    }
    media = soma/alunos;
    printf("A média é %.2f", media);
    return 1;
}