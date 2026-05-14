#include <stdio.h>
#include <string.h>

int main(){
    char st[50];

    printf("Digite algo: ");
    fgets(st, sizeof(st), stdin);

    printf("\nVocê digitou: %s",st);


    return 0;
}