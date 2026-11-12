
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro { // Sruct serve para criar uma estrutura onde dentro de uma unica variável podemos armazenar diversar infos
    char escola[100];
    int turma;
    char tema[100];
    int dia, mes, ano;
    char responsavel[100];
    char situacao[50];
};

int main() {

    struct Cadastro cadastro;

    char cad_escola[100], tema[100], resp[100];
    int turma, dia, mes, ano;
    int opcao, opcoes;
    char situacao[50], pesquisa[100];

    int cadastrado = 0;

    do {

        printf("\n=================================== \n");
        printf("               MENU                 \n");
        printf("=================================== \n");
        printf("1 - Iniciar cadastro de PSE \n");
        printf("2 - Consulta das acoes \n");
        printf("3 - Lista de acoes cadastradas \n");
        printf("4 - Atualizar situacao \n");
        printf("0 - Sair \n");
        printf("=================================== \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcoes);

        // CAadastro do projeto
        if (opcoes == 1) {

            printf("\n================================\n");
            printf("       CADASTRO DE PROJETO      \n");
            printf("================================\n");

            printf("\nInsira o nome da escola: \n");
            scanf(" %99[^\n]", cad_escola);

            printf("\nInforme sua turma: \n");
            scanf("%d", &turma);

            printf("\nInforme o tema do projeto: \n");
            scanf(" %99[^\n]", tema);

            printf("\nInforme a data prevista (dd/mm/aaaa): \n");
            scanf("%d/%d/%d", &dia, &mes, &ano);

            printf("\nResponsavel pelo projeto: \n");
            scanf(" %99[^\n]", resp);

            printf("\nInforme a situacao do projeto: \n");
            scanf(" %49[^\n]", situacao);

            strcpy(cadastro.escola, cad_escola);
            cadastro.turma = turma;
            strcpy(cadastro.tema, tema);

            cadastro.dia = dia;
            cadastro.mes = mes;
            cadastro.ano = ano;

            strcpy(cadastro.responsavel, resp);
            strcpy(cadastro.situacao, situacao);

            cadastrado = 1;


            printf("\n================================\n");
            printf("       CADASTRO CONCLUIDO!\n");
            printf("================================\n");

            printf("\n===== DADOS DO PROJETO =====\n");
            printf("Escola: %s\n", cadastro.escola);
            printf("Turma: %d\n", cadastro.turma);
            printf("Tema: %s\n", cadastro.tema);
            printf("Data: %02d/%02d/%04d\n",
                   cadastro.dia, cadastro.mes, cadastro.ano);
            printf("Responsavel: %s\n", cadastro.responsavel);
            printf("Situacao: %s\n", cadastro.situacao);
            printf("====================================\n");

        }

        // Consulta dos projetos cadastrados
        else if (opcoes == 2) {

            if (cadastrado == 0) {

                printf("\nNenhum projeto cadastrado!\n");

            } else {

                printf("\n===== CONSULTA DE PROJETOS =====\n");
                printf("1 - Pesquisar por escola\n");
                printf("2 - Pesquisar por tema\n");
                printf("0 - Voltar ao menu principal\n");

                printf("\nEscolha uma opcao: ");
                scanf("%d", &opcao);

                if (opcao == 1) {

                    
    printf("\nDigite o nome da escola: ");
    scanf(" %99[^\n]", pesquisa);

			    if (strcmp(pesquisa, cadastro.escola) == 0) {
			
			        printf("\nProjeto encontrado!\n");
			        printf("Escola: %s\n", cadastro.escola);
			        printf("Tema: %s\n", cadastro.tema);
			        printf("Turma: %d\n", cadastro.turma);
			        printf("Data: %02d/%02d/%04d\n",
			               cadastro.dia, cadastro.mes, cadastro.ano);
			        printf("Responsavel: %s\n", cadastro.responsavel);
			        printf("Situacao: %s\n", cadastro.situacao);
			
			    } else {
			
			        printf("\nProjeto nao encontrado!\n");
			
			    }
			}

                else if (opcao == 2) {
			    printf("\nDigite o tema do projeto: ");
			    scanf(" %99[^\n]", pesquisa);
			
			    if (strcmp(pesquisa, cadastro.tema) == 0) {
			
			        printf("\nProjeto encontrado!\n");
			        printf("Escola: %s\n", cadastro.escola);
			        printf("Tema: %s\n", cadastro.tema);
			        printf("Turma: %d\n", cadastro.turma);
			        printf("Data: %02d/%02d/%04d\n",
			               cadastro.dia, cadastro.mes, cadastro.ano);
			        printf("Responsavel: %s\n", cadastro.responsavel);
			        printf("Situacao: %s\n", cadastro.situacao);
			
			    } else {
			
			        printf("\nProjeto nao encontrado!\n");
			
			    }
			}

            }

        }

        // LISTA DE PROJETOS
        else if (opcoes == 3) {

            if (cadastrado == 0) {

                printf("\nNenhum projeto cadastrado!\n");

            } else {

                printf("\n===== PROJETOS CADASTRADOS =====\n");

                printf("Escola: %s\n", cadastro.escola);
                printf("Turma: %d\n", cadastro.turma);
                printf("Tema: %s\n", cadastro.tema);
                printf("Data: %02d/%02d/%04d\n",
                       cadastro.dia, cadastro.mes, cadastro.ano);
                printf("Responsavel: %s\n", cadastro.responsavel);
                printf("Situacao: %s\n", cadastro.situacao);

            }

        }

        else if (opcoes == 4) {

            if (cadastrado == 0) {

                printf("\nNenhum projeto cadastrado!\n");

            } else {

                printf("\n===== ATUALIZAR SITUACAO =====\n");
                printf("Informe a nova situacao: ");
                scanf(" %49[^\n]", situacao);

                strcpy(cadastro.situacao, situacao);

                printf("\nSituacao atualizada com sucesso!\n");
                printf("Nova situacao: %s\n", cadastro.situacao);
            }

        }

        else if (opcoes == 0) {

            printf("\nEncerrando o programa...\n");

        }

        else {

            printf("\nOpcao invalida!\n");

        }

        /
    } while (opcoes != 0); // repete o codigo 
 
    return 0;
}
