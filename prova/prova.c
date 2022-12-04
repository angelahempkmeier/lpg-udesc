#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno
{
    int id_aluno;
    char nome_aluno[50];
    int deleted;

}tabelaAluno[10];

typedef struct Notas {
    int id_notas;
    int id_aluno;
    float nota;
    int deleted;
    }tabelaNotas[30];

void imprimirMenu(){
    printf("---------Menu---------");
    printf("\n");
    printf("[ 1 ] Aluno\n");
    printf("[ 2 ] Notas\n");
    printf("[ 3 ] Relatório\n");
    printf("[ 4 ] Sair\n");
}

void menuAluno(){
    printf("--------MENU DO ALUNO---------\n");
    printf("[ 1 ] Cadastrar\n");
    printf("[ 2 ] Consultar por id\n");
    printf("[ 3 ] Exluir por id\n");
    printf("[ 4 ] Alterar por id\n");
    printf("[ 5 ] Relatório\n");
    printf("[ 6 ] Voltar\n");
}

void cadastrarAluno(){
    printf("Digite o nome do aluno: ");
    scanf("%s", Aluno.nome_aluno);
    printf("Digite a id do aluno: ");
    scanf("%s", Aluno.id_aluno);
}




int main(){
    tabelaAluno[10] alunos;
    tabelaNotas[30] notas;
    int opcao;
    do {
        imprimirMenu();
        printf("Escolha a opção:");
        scanf("%i", &opcao);
        switch (opcao) {
        case 1:
            menuAluno();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("Opção inválida!");
            break;
        }    
    } while (opcao != 0);
    
    
    
    return 0;
}