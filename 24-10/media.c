#include <stdio.h>

float mediaDois(float, float);


int main(){
    float n1, n2, media;
    n1 = 4;
    n2 = 10;
    media = mediaDois(n1,n2);
    printf("%.2f\n", media);

    
    return 0;
}

float mediaDois(float a,float b){
    return (a+b)/2;
}