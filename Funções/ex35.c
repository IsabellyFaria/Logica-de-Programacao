#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int len(char s[]){
    int cont = 0;
    while(s[cont] != '\0'){
        cont++;
    }
    return cont;
}
bool cmp(char s1[], char s2[]){
    if(len(s1)!=len(s2)){
        return false;
    }else{
        int tamanho = len(s1);
        for(int i = 0; i < tamanho; i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }
    }
    return true;
}
void cnpy(char dest[], char src[], int t){
    for(int i = 0; i < t; i++){
        dest[i] = src[i];
    }
    int tamanho = len(dest);
    if(tamanho>t){
        for(int i = t; i < tamanho; i++){
            dest[i] = '\0';
        }
    }
}
char* cat(char n1[], char n2[]){
    int tn1 = len(n1);
    int tn2 = len(n2);
    int tamanho = tn1 + tn2 +1;
    char *resultado = malloc(tamanho * sizeof(char));
    

    for(int i = 0; i < tn1; i++){
        resultado[i] = n1[i];
    }
    for(int i = tn1; i < tn2; i++){
        resultado[i] = n2[i-tn1];
    }
    resultado[tamanho-1] = '\0';

    return resultado;
}
int* find(char s1[], char s2[]){
    if(len(s1)>=len(s2)){
        int ts1 = len(s1);
        int ts2 = len(s2);
        int primeiro[ts1];
        int cont = 0, i =0;
        while(i<ts1){
            if(s1[i]==s2[0]){
                int encontra = 0;
                for(int j = 0; j < ts2; j++){
                    if(i + j >= ts1 || s1[i+j] != s2[j]){
                        encontra = 1;
                        break;
                    }
                }
                if(encontra == 0){
                    primeiro[cont] = i;
                    cont++;
                }
                i++;
            }else{
                i++;
            }
        }
        if(cont == 0) {
            int *erro = malloc(sizeof(int));
            erro[0] = -1;
            return erro;
        }

        int *respostaFinal = malloc(cont * sizeof(int));

        for(int i = 0; i < cont; i++) {
            respostaFinal[i] = primeiro[i];
        }

        return respostaFinal;  
    }else{
        int *erro = malloc(sizeof(int));
        erro[0] = -1;

        return erro;
    }
}
int main(){

    // =========================
    // TESTE LEN
    // =========================
    char s1[] = "banana";

    printf("LEN:\n");
    printf("Tamanho de \"%s\" = %d\n\n", s1, len(s1));

    // TESTE CMP
    char a[] = "teste";
    char b[] = "teste";
    char c[] = "python";

    printf("CMP:\n");
    printf("a e b sao iguais? %d\n", cmp(a,b));
    printf("a e c sao iguais? %d\n\n", cmp(a,c));

    // TESTE CNPY
    char origem[] = "computador";
    char destino[20];

    cnpy(destino, origem, len(origem)+1);

    printf("CNPY:\n");
    printf("Destino = %s\n\n", destino);

    // TESTE CAT
    
    char n1[] = "Ola ";
    char n2[] = "mundo";

    char *concat = cat(n1, n2);

    printf("CAT:\n");
    printf("%s\n\n", concat);

    free(concat);


    // TESTE FIND
    char texto[] = "banana";
    char busca[] = "na";

    int *resultado = find(texto, busca);

    printf("FIND:\n");

    if(resultado[0] == -1){
        printf("Nenhuma ocorrencia encontrada.\n");
    }else{
        printf("Encontrado nas posicoes:\n");
        for(int i = 0; i<(sizeof(resultado)/sizeof(resultado[0])); i++){
            printf("%d\n", resultado[i]);
        }
    }

    free(resultado);

    return 0;
}