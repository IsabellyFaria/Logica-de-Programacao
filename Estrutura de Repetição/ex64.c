#include <stdio.h>
int main(){
    int soma = 0, numero;

    for(int i = 0; i < 10; i++){
         printf("Digite um número:\n");
        scanf("%i", &numero);
        if(numero<40){
             soma = soma + numero;
        }
    
    }
    printf("Soma dos numeros inferiores a 40 é %i", soma);
    return 1;
}
