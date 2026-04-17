#include <stdio.h>
int main(){
    float n1, n2, media;
    char novoAluno = 'S';
    while(novoAluno == 'S'){
        n1 = -1;
        n2 = -1;
        while(n1 < 0 || n1 > 10){
            printf("Digite a primeira nota: ");
            scanf("%f", &n1); 
        }
        while(n2 < 0 || n2 > 10){
            printf("Digite a segunda nota: ");
            scanf("%f", &n2); 
        }
        media = (n1+n2)/2;

        printf("Média igual à %.2f\n", media);
        
        printf("Deseja inserir notas de outro aluno? (S/N): ");
        scanf(" %c", &novoAluno);
    }
    return 1;
}