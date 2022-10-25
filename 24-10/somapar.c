#include <stdio.h>

int somaPar(int);

int main(){
    int res, a;
    printf("Quantos valores você quer verifiar?");
    scanf("%i", &a);
    res = somaPar(a);
    printf("Valor: %i\n", res);
    return 0;
}

int somaPar(int n){
    if(n==1){
        return 2;
    }else {
        return (somaPar(n-1) + 2*n);
    }
}


