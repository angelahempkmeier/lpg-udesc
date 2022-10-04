#include <stdio.h>
#include <stdlib.h>

int main(){

float notas[3][3] = {{8,6,7},{3,5,10},{9,2,7}};
float soma = 0, media, notasAluno[3], mediaAluno, auxSoma = 0;
float maior = -1, menor=11;

for(int aluno = 0; aluno<3; aluno++){
        for(int nota = 0; nota<3; nota++){
            soma += notas[aluno][nota];
            if(notas[aluno][nota]>maior){
                maior = notas[aluno][nota];
            }
    }
    media = soma/9;
}


for(int aluno = 0; aluno<3; aluno++){
        for(int nota = 0; nota<3; nota++){
            if(notas[aluno][nota]<=menor){
                menor = notas[aluno][nota];
            }
    }
}
int qualALuno;
for(int aluno = 0; aluno<3; aluno++){
    notasAluno[aluno] = 0;
    for(int nota = 0; nota<3; nota++){
        notasAluno[aluno] +=  notas[aluno][nota];
    }
    if(notasAluno[aluno]>=auxSoma){
        auxSoma = notasAluno[aluno];
        qualALuno = aluno;
    }
}
float notaProva[3];
float auxProva = 0;
float mediaProva;
int qualProva;
for(int nota=0; nota<3;nota++){
    notaProva[nota] = 0;
    for(int aluno =0; aluno<3;aluno++){
        notaProva[nota] += notas[aluno][nota];
    }
    if(notaProva[nota]>=auxProva){
        auxProva = notaProva[nota];
        qualProva = nota;
    }
    mediaProva = auxProva/3;
}


printf("Média geral: %.2f\n", media);
printf("Maior nota: %.2f\n", maior);
printf("Menor nota: %.2f\n", menor);
printf("Aluno com maior média: %i\n", qualALuno);
printf("Maior média prova: %i\n", qualProva);

return 0;
}