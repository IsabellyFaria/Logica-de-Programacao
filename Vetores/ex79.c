#include <stdio.h>
int main(){
    float soma = 0, media, nota;
    int acima=0;
    float notas[20];

    printf("Leitura das Notas:\n");
    for(int i = 0; i<20;i++){
        nota = -1;
        while(nota < 0 || nota > 10){
            printf("\n\tDigite uma nota válida para o %iº aluno: ",i+1);
            scanf("%f",&nota);
        }
        notas[i] = nota;
        soma = soma + nota;
    }


    media = soma/20;
    for(int j = 0; j<20; j++){
        if(notas[j] > media){
            acima++;
        }
    }

    
    printf("Os resultados são:\n\t Média da turma: %.2f\n\tAlunos acima da média: %i\n",media,acima);
    return 1;
}