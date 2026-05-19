#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    char *vogais = "aeiouAEIOU";
    printf("Digite uma palavra: ");
    fgets(s, sizeof(s),stdin);


    for(int i = 0; i < strlen(s); i++){
        if(strchr(vogais, s[i]) == NULL){
            printf("%c",s[i]);
        }
    }


    return 0;
}