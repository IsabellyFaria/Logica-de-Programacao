#include <stdio.h>

void quicksort(int v[], int pivo_index, int periodo[2]){
    int pivo = v[pivo_index];
    if(periodo[0]>=periodo[1]){
        
        return;
    }

    else{

        int tamanho = periodo[1] - periodo[0] + 1;

        int direita[tamanho];
        int esquerda[tamanho];
        int lenDireita = 0, lenEsquerda = 0;
        
        for(int i = periodo[0]; i <= periodo[1]; i++){
            if(i != pivo_index){
                if(v[i] < pivo ){
                esquerda[lenEsquerda] = v[i];
                lenEsquerda++;
                }else{
                    direita[lenDireita] = v[i];
                    lenDireita++;
                }
            } 
        }
        for(int i = periodo[0]; i <= periodo[1]; i++){
            if(i < periodo[0] + lenEsquerda){
                v[i] = esquerda[i-periodo[0]];
            }else{
                if(i == periodo[0] + lenEsquerda){
                    v[i] = pivo;
                }
                else{
                    v[i] = direita[i - (periodo[0] + lenEsquerda + 1)];
                }
            }
        }
        int posPivo = periodo[0] + lenEsquerda;

        int intervaloDireita[2] = {posPivo + 1, periodo[1]};
        int intervaloEsquerda[2] = {periodo[0], posPivo - 1};

        quicksort(v, ((intervaloDireita[0] + intervaloDireita[1])/2),intervaloDireita);
        quicksort(v, ((intervaloEsquerda[0] + intervaloEsquerda[1])/2),intervaloEsquerda);

    }
    
    

}
int main(){
    int v[10] = {6,5,3,7,8,3,6,1,5,2};
    int len = sizeof(v)/sizeof(v[0]);
    int periodo[2] = {0,9};
    int pivo_index = (len-1) / 2;
    quicksort(v, pivo_index, periodo);
    
    for(int i = 0; i <10; i++){
        printf(" %i ", v[i]);
    }
}