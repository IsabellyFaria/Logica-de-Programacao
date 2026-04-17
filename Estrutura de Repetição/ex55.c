#include <stdio.h>
int main(){
    printf("Tabuada do 8:\n");
    for(int i = 1; i < 11; i++){
        printf("\t8 x %d = %d\n", i, i*8);
    }
    return 1;
}