#include <stdio.h>

int main(){
    float n[3];
    int i;
    float media, soma = 0;
    for(i = 0; i<3;i++){
        printf("Digite a %i nota:", i);
        scanf("%f", &n[i]);
        soma += n[i];
    }
    media = soma/i;
    printf("Media = %.2f \n", media);

    return 0;

}