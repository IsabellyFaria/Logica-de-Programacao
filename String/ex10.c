#include <stdio.h>
#include <string.h>

int main(){
    char s[50];

    printf("Digite uma palavra: ");
    fgets(s,sizeof(s),stdin);

    for(int i = strlen(s); i >= 0; i--){
        if(s[i] != '\0' || s[i] != '\n'){
            printf("%c",s[i]);
        }
    }

    return 0;
}