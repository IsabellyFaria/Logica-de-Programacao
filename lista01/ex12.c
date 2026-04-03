#include <stdio.h>
int main(){
   //Variaveis
   float salario, reajuste, total;
   //Entrada
   printf("Digite o salário atual:\n\tR$ ");
   scanf("%f",&salario);

   printf("Digite o percentual do reajuste:\n\t");
   scanf("%f", &reajuste);

   //Processamento
    total = salario + ((reajuste/100)*salario);

   //Saída 
   printf("O salário com o reajuste é equivalente à R$ %.2f",total);

   return 1;
}