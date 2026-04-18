#include <stdio.h>
int main(){
    int dentro = 0, fora = 0, numero;
    for(int i = 0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%i", &numero);
        if(numero >= 10 && numero <= 20){
             dentro++;
        }else{
             fora++;
        }
    }
    printf("Foram registrados \n\t%i numeros de 10 à 20. \n\t%i numeros fora do intervalo", dentro, fora);
    return 1;
}