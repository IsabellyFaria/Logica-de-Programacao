#include <stdio.h>

int main(){
    int v[10] = {6,5,3,7,8,3,6,1,5,2};
    
    for(int i = 10; i >= 0; i--){
        for(int j = 1; j < 10; j++){
            if(j == i){
                break;
            }
            if(v[j-1]>v[j]){
                int maior = v[j-1];
                v[j-1] = v[j];
                v[j] = maior;
            }
        }
    }
    for(int i = 0; i<10; i++){
        printf("%i\n",v[i]);
    }
    return 1;
}