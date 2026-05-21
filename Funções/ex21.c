#include <stdio.h>

int triangulo(int a, int b, int c){
    if(a+b+c == 180){
        if( a == b && b==c){
            return 1;
        }else if(a == b || b == c || c ==a){
            return 2;
        }else{
            return 3;
        }
    }else{
        return 0;
    }
}
int recebeAngulo(int i){
    int angulo =0;
    while(angulo <=0){
        printf("\nDigite um valor válido para o %iº angulo: ",i);
        scanf("%i", &angulo);
    }
    return angulo;
}
int main(){
    int a,b,c;
    a = recebeAngulo(1);
    b = recebeAngulo(2);
    c = recebeAngulo(3);
    int resposta = triangulo(a,b,c);

    printf("\n%i\n", resposta);
    return 0;
}