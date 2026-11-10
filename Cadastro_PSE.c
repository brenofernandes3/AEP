#include <stdio.h>
#include <stdlib.h>

int main() {
    char cad_escola[100], tema[100], resp[100];
    int turma, data, dia, mes, ano;
    int opcao, opcoes;

    printf("=================================== \n");
    printf("               MENU                 \n");
    printf("=================================== \n");
    printf("1 - Inicar cadastro de PSE \n");
    printf("2 - Consulta das acoes \n");
    printf("3 - Lista de acoes cadastradas \n");
    printf("=================================== \n");
    printf("Escolha uma opcao: ");
	scanf("%d", &opcoes);	
    
    if (opcoes == 1) {

    printf("\n================================\n");
    printf("       CADASTRO DE PROJETO        \n");
    printf("==================================\n");

    printf("\nInsira o nome da escola: \n");
    scanf(" %[^\n]", cad_escola);

    printf("\nInforme sua turma: \n");
    scanf("%d", &turma);
    getchar();

    printf("\nInforme o tema do projeto: \n");
    scanf(" %99[^\n]", tema);

    printf("\nInforme a data prevista: \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\nResponsavel pelo projeto: \n");
    scanf(" %[^\n]", resp);

    printf("\n================================\n");
    printf("       CADASTRO CONCLUIDO!\n");
    printf("================================\n");

    printf("\n===== DADOS DO PROJETO =====\n");
    printf("Escola: %s\n", cad_escola);
    printf("Turma: %d\n", turma);
    printf("Tema: %s\n", tema);
    printf("Data: %02d/%02d/%04d\n", dia, mes, ano);
    printf("Responsavel: %s\n", resp);
    printf("====================================\n");
	} else if  (opcoes == 2) {
		
			printf("\n===== CONSULTA DE PROJETOS =====\n");
			printf("1 - Pesquisar por escola\n");
			printf("2 - Pesquisar por tema\n");
			printf("3 - Listar todos os projetos\n");
			printf("0 - Voltar ao menu principal\n");
	
				printf("\nEscolha uma opcao: ");
				scanf("%d", &opcao);
				}
    
    
       return 0;
}
