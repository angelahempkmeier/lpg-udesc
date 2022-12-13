#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void menuPrincipal();
void consultarAlunos();
void relatorioAlunos();

typedef struct Aluno{
	int idAluno;
	char nomeAluno[50];
}Aluno;

int qtdAlunos = 25;
Aluno alunos[30];

int main(){
	menuPrincipal();

	return 0;
}

void menuPrincipal(){
	int opcao;

	do{
		printf("\nMENU PRINCIPAL\n");
		printf("1: Consultar por id\n2: - Relatório\n3: Sair\nEscolha uma opcao: ");
		scanf("%d", &opcao);
		getchar();
		switch(opcao){
			case 1:
				consultarAlunos();
				break;
			case 2:
				relatorioAlunos();
				break;
			case 3:
            printf("Saindo...");
				break;
			default:
				printf("Por favor, coloque um entrada valida\n");
		}
	}while(opcao != 3);
}


void consultarAlunos(){
	int i, id_consulta;

	printf("Insira o código do aluno: ");
	scanf("%d", &id_consulta);

	for(i=0;i<25;i++){
		if(alunos[i].idAluno == id_consulta){
			printf("Aluno Encontrado: %s", alunos[i].nomeAluno);
		}else{
			//printf("Aluno não encontrado.");
		}
	}
}


void relatorioAlunos(){
	printf("Relatório aluno");
    FILE *ent;
    ent = fopen("alunos.txt", "r");
    int id, contador = 0;
    char nome[50];

	fscanf(ent, "%[^\n]s", nome);
    if(ent != NULL){
        while(fscanf(ent, "%d %[^\n]s", &id, nome) != EOF){
            alunos[contador].idAluno = id;
			strcpy(alunos[contador].nomeAluno, nome);
			contador++;
			printf("%d %s\n", id, nome);
        }
    }

    fclose(ent);
}