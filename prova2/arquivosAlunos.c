#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Aluno{
	int idAluno;
	char nomeAluno[50];
}Aluno;

int qtdAlunos = 0;
Aluno alunos[30];


int main(){
	//File *arq = fopen("file.txt", "r");
	
	char linha[30];
	FILE *fp = fopen("file.txt", "r"); 
	char *token;
    int i = 0;
	while(fgets(linha,200,fp)){
		token = strtok(linha, ";"); //só devolve o incio da string, ou seja, o id
        alunos[i].idAluno = atoi(token);
		printf("%s||||", token);
        token = strtok(NULL, "\n");
        strcpy(alunos[i].nomeAluno, token); 
        i++;
	}

    for(i=0;i<30;i++){
        printf("id: %i **** nome: %s\n", alunos[i].idAluno, alunos[i].nomeAluno);
    }
            




return 0;

}