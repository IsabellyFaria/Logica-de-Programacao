#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[50];
    
    printf("Digite um texto: ");
    fgets(s1,sizeof(s1),stdin);

    printf("Digite mais um texto: ");
    fgets(s2,sizeof(s2),stdin);
    int igual = 0;

    

    if(strlen(s1) == strlen(s2)){
        for(int i = 0; i < strlen(s1); i++){
            if(s1[i] != s2[i]){
                printf("Strings DIferentes!");
                igual = 1;
            }
        }
        if(igual == 0){
            printf("Strings iguais!");
        }
    }else{
        printf("Strings Diferentes!");
    }


    return 0;
}