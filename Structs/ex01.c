#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
}Horario;
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    Data data;
    Horario horario;
    char descricao[150];
}Compromisso;

Data setdata();
Horario setHorario();
Compromisso setCompromisso(Data data, Horario horario);
void imprimeMenu();
void adicionaCompromisso(Compromisso agenda[], int n);
void imprimeCompromissos(Compromisso agenda[], int n);
void imprimeCompromisso(Compromisso agenda[], int n);
void procuraData(Compromisso agenda[], int n, Data data);

int main(){
    Compromisso agenda[50];
    int n = 0, op =-1;

    while(op != 4){
        imprimeMenu();
        scanf("%d",&op);

        switch(op){
            case 1:
                if(n == 50){
                    printf("\nAgenda lotada!!");
                }else{
                    adicionaCompromisso(agenda, n);
                    n++;
                }
                break;
            case 2:
                if(n == 0){
                    printf("\nAgenda Vazia!!");
                }else{
                    imprimeCompromissos(agenda, n);
                }
                break;
            case 3:
                Data data = setdata();
                procuraData(agenda, n, data);
        }

        printf("\n\n\n... Aperte ENTER para continuar ...");
        while(getchar() != '\n');
        getchar();

    }


    return 0;
}

void imprimeMenu(){
    system("clear");
    printf("\nOPERAÇÕES DA AGENDA:");
    printf("\n\t1 - Adicionar Compromisso.");
    printf("\n\t2 - Imprimir Compromissos");
    printf("\n\t3 - Buscar Por Data");
    printf("\n\t4 - Encerrar\n\n");
}
void adicionaCompromisso(Compromisso agenda[], int n){
    Compromisso compromisso = setCompromisso(setdata(),setHorario());
    agenda[n] = compromisso;
}
void imprimeCompromissos(Compromisso agenda[], int n){
    for(int i = 0; i < n; i++){
        imprimeCompromisso(agenda, i);
    }
}
void imprimeCompromisso(Compromisso agenda[], int n){
    printf("\nData: %i/%i/%i | ", agenda[n].data.dia, agenda[n].data.mes, agenda[n].data.ano);
    printf("Horário: %i:%i:%i | ", agenda[n].horario.hora, agenda[n].horario.minuto, agenda[n].horario.segundo);
    printf("%s",agenda[n].descricao);
}
int datasIguais(Data d1, Data d2) {
    return d1.dia == d2.dia &&
           d1.mes == d2.mes &&
           d1.ano == d2.ano;
}
void procuraData(Compromisso agenda[], int n, Data data){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(datasIguais(data, agenda[i].data)){
            imprimeCompromisso(agenda, i);
            cont++;
        }
    }
    if(cont == 0){
        printf("Nenhum compromisso na data fornecida");
    }else{
        printf("\n\nForam encontrados %i resultados", cont);
    }
}
Data setdata(){
    int dia=0, mes=0, ano=-1;
    while(dia<1 || dia>31){
      printf("\nDigite o dia: ");
        scanf("%i", &dia);  
    }
    while(mes<1 || mes>12){
      printf("\nDigite o mês: ");
        scanf("%i", &mes);  
    }
    while(ano<1900){
      printf("\nDigite o ano: ");
        scanf("%i", &ano); 
    }
    Data data = {
        .dia = dia, 
        .mes = mes,
        .ano = ano
    };
    return data;
}
Horario setHorario(){
    int hora = -1, minuto =-1, segundo =-1;
    while(hora<0 || hora >24){
        printf("\nHora: ");
        scanf("%d", &hora);
    }
    while(minuto<0 || minuto >59){
        printf("\nMinuto: ");
        scanf("%d", &minuto);
    }
    while(segundo<0 || segundo >59){
        printf("\nSegundo: ");
        scanf("%d", &segundo);
    }
    Horario horario = {
        .hora = hora,
        .minuto = minuto,
        .segundo = segundo
    };
    return horario;
}
Compromisso setCompromisso(Data data, Horario horario){
    Compromisso compromisso ={
        .data = data,
        .horario = horario
    };
    getchar();
    printf("\nBreve descrição do compromisso: ");
    fgets(compromisso.descricao,sizeof(compromisso.descricao),stdin);
    compromisso.descricao[strcspn(compromisso.descricao,"\n")] = '\0';

    
    return compromisso;
}