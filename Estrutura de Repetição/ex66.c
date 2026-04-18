#include <stdio.h>
int main(){
    int n1, n2, soma=0;
    printf("Digite o primeiro numero:\n");
    scanf("%i",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%i", &n2);
    while(!(n2>n1)){
         printf("Digite um numero maior que %i:\n",n1);
         scanf("%i", &n2);
     }
    for(int i = n1; i <n2+1;i++){
        soma = soma+i;
    }
    printf("Valor da soma dos números no intervalo [%i, %i] é %i", n1,n2, soma );
     return 1;
}
