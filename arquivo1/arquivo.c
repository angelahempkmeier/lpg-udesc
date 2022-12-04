#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ent, *sai;
    int id[5][5];
    int i, j;
    ent = fopen("entrada.txt", "r");
    sai = fopen("saida.txt", "wt");
    for(i = 0; i<5; i++){
        for(j=0;j<5;j++){
            fscanf(ent, "%d", &id[i][j]);
            fprintf(sai, "%d ", id[i][j]); 
        }
        fprintf(sai,"\n");
    }
    fclose(ent);
    fclose(sai);


    return 0;
}