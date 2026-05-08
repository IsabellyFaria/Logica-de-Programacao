#include <stdio.h>

int main(){
    int v[10] = {6,5,3,7,8,3,6,1,5,2};

    for(int i = 0; i < 10; i++){
        int menor;
        for(int j = i; j<10; j++){
            if(j == i || v[j] < v[menor]){
                menor = j;
            }
            
        }
        int temporario = v[menor];
        v[menor] = v[i];
        v[i] = temporario;
    }
    for(int i = 0; i<10; i++){
        printf("%i\n",v[i]);
    }
    return 1;
}