#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float n[5];
    float auxMaior = 0;
    float auxMenor = 0;

    for(i=0;i<5;i++){
        printf("Digite a %ia nota: ", i+1);
        scanf("%f", &n[i]);
        if(n[i]>= auxMaior){
            auxMaior = n[i];
        }
        
    }
    auxMenor = n[1];
    for(i=0; i<5;i++){
        if(n[i]<=auxMenor){
            auxMenor = n[i];
        }
    }
    printf("A maior nota é: %.2f\n", auxMaior);
    printf("A menor nota é: %.2f\n", auxMenor);

    return 0;
}