


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro {
    char escola[100];
    int turma;
    char tema[100];
    int dia, mes, ano;
    char responsavel[100];
    int situacao;
    int participantes;
};

int main() {

    int total_acoes = 0;
    int total_participantes = 0;
    int total_concluidas = 0;

    struct Cadastro cadastro[100];

    char cad_escola[100], tema[100], resp[100];
    int turma, dia, mes, ano;
    int opcao, opcoes;
    int i, encontrado, numero;

    int situacao, pesquisa_situacao;
    char pesquisa[100];

    do {

        printf("\n=================================== \n");
        printf("               MENU                 \n");
        printf("=================================== \n");
        printf("1 - Iniciar cadastro de PSE \n");
        printf("2 - Consulta das acoes \n");
        printf("3 - Lista de acoes cadastradas \n");
        printf("4 - Atualizar situacao \n");
        printf("5 - Relatorio geral \n");
        printf("0 - Sair \n");
        printf("=================================== \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcoes);

        // CADASTRO DOS PROJETOS
        if (opcoes == 1) {

            if (total_acoes >= 100) {

                printf("\nLimite de cadastros atingido!\n");

            } else {

                printf("\n================================\n");
                printf("       CADASTRO DE PROJETO      \n");
                printf("================================\n");

                printf("\nInsira o nome da escola: \n");
                scanf(" %99[^\n]", cad_escola);

                printf("\nInforme sua turma: \n");
                scanf("%d", &turma);

                printf("\nInforme o tema do projeto: \n");
                scanf(" %99[^\n]", tema);

                printf("\nInforme a quantidade de participantes: \n");
                scanf("%d", &cadastro[total_acoes].participantes);

                printf("\nInforme a data prevista (dd/mm/aaaa): \n");
                scanf("%d/%d/%d", &dia, &mes, &ano);

                printf("\nResponsavel pelo projeto: \n");
                scanf(" %99[^\n]", resp);

                printf("\nInforme a situacao do projeto: \n");
                printf("1 - Concluida\n");
                printf("2 - Em andamento\n");
                printf("3 - Pendente\n");
                scanf("%d", &situacao);

                while (situacao < 1 || situacao > 3) {
                    printf("\nSituacao invalida! Escolha entre 1 e 3: ");
                    scanf("%d", &situacao);
                }

                strcpy(cadastro[total_acoes].escola, cad_escola);
                cadastro[total_acoes].turma = turma;
                strcpy(cadastro[total_acoes].tema, tema);

                cadastro[total_acoes].dia = dia;
                cadastro[total_acoes].mes = mes;
                cadastro[total_acoes].ano = ano;

                strcpy(cadastro[total_acoes].responsavel, resp);

                cadastro[total_acoes].situacao = situacao;

                total_participantes += cadastro[total_acoes].participantes;

                total_acoes++;

                printf("\n================================\n");
                printf("       CADASTRO CONCLUIDO!\n");
                printf("================================\n");

                printf("\n===== DADOS DO PROJETO =====\n");
                printf("Escola: %s\n", cadastro[total_acoes - 1].escola);
                printf("Turma: %d\n", cadastro[total_acoes - 1].turma);
                printf("Tema: %s\n", cadastro[total_acoes - 1].tema);
                printf("Participantes: %d\n", cadastro[total_acoes - 1].participantes);

                printf("Data: %02d/%02d/%04d\n",
                       cadastro[total_acoes - 1].dia,
                       cadastro[total_acoes - 1].mes,
                       cadastro[total_acoes - 1].ano);

                printf("Responsavel: %s\n", cadastro[total_acoes - 1].responsavel);

                printf("Situacao: ");
                if (situacao == 1) {
                    printf("Concluida\n");
                }
                else if (situacao == 2) {
                    printf("Em andamento\n");
                }
                else {
                    printf("Pendente\n");
                }
            }
        }

        // CONSULTA DOS PROJETOS
        else if (opcoes == 2) {

            if (total_acoes == 0) {

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

                    encontrado = 0;

                    for (i = 0; i < total_acoes; i++) {

                        if (strcmp(pesquisa, cadastro[i].escola) == 0) {

                            printf("\nProjeto encontrado!\n");
                            printf("Escola: %s\n", cadastro[i].escola);
                            printf("Tema: %s\n", cadastro[i].tema);
                            printf("Turma: %d\n", cadastro[i].turma);
                            printf("Participantes: %d\n", cadastro[i].participantes);

                            printf("Situacao: ");
                            if (cadastro[i].situacao == 1) {
                                printf("Concluida\n");
                            }
                            else if (cadastro[i].situacao == 2) {
                                printf("Em andamento\n");
                            }
                            else {
                                printf("Pendente\n");
                            }

                            encontrado = 1;
                        }
                    }

                    if (encontrado == 0) {
                        printf("\nProjeto nao encontrado!\n");
                    }
                }

                else if (opcao == 2) {

                    printf("\nDigite o tema do projeto: ");
                    scanf(" %99[^\n]", pesquisa);

                    encontrado = 0;

                    for (i = 0; i < total_acoes; i++) {

                        if (strcmp(pesquisa, cadastro[i].tema) == 0) {

                            printf("\nProjeto encontrado!\n");
                            printf("Escola: %s\n", cadastro[i].escola);
                            printf("Tema: %s\n", cadastro[i].tema);
                            printf("Turma: %d\n", cadastro[i].turma);
                            printf("Participantes: %d\n", cadastro[i].participantes);

                            printf("Situacao: ");
                            if (cadastro[i].situacao == 1) {
                                printf("Concluida\n");
                            }
                            else if (cadastro[i].situacao == 2) {
                                printf("Em andamento\n");
                            }
                            else {
                                printf("Pendente\n");
                            }

                            encontrado = 1;
                        }
                    }

                    if (encontrado == 0) {
                        printf("\nProjeto nao encontrado!\n");
                    }
                }
            }
        }

        // LISTA DE PROJETOS
        else if (opcoes == 3) {

            if (total_acoes == 0) {

                printf("\nNenhum projeto cadastrado!\n");

            } else {

                printf("\n===== PROJETOS CADASTRADOS =====\n");

                for (i = 0; i < total_acoes; i++) {

                    printf("\n===== ACAO %d =====\n", i + 1);

                    printf("Escola: %s\n", cadastro[i].escola);
                    printf("Turma: %d\n", cadastro[i].turma);
                    printf("Tema: %s\n", cadastro[i].tema);
                    printf("Participantes: %d\n", cadastro[i].participantes);

                    printf("Data: %02d/%02d/%04d\n",
                           cadastro[i].dia, cadastro[i].mes, cadastro[i].ano);

                    printf("Responsavel: %s\n", cadastro[i].responsavel);

                    printf("Situacao: ");
                    if (cadastro[i].situacao == 1) {
                        printf("Concluida\n");
                    }
                    else if (cadastro[i].situacao == 2) {
                        printf("Em andamento\n");
                    }
                    else {
                        printf("Pendente\n");
                    }
                }
            }
        }

        // ATUALIZAR SITUACAO
        else if (opcoes == 4) {

            if (total_acoes == 0) {

                printf("\nNenhum projeto cadastrado!\n");

            } else {

                printf("\n===== ATUALIZAR SITUACAO =====\n");

                printf("\nDigite o numero da acao que deseja atualizar:\n");

                for (i = 0; i < total_acoes; i++) {
                    printf("%d - %s | %s\n", i + 1,
                           cadastro[i].escola, cadastro[i].tema);
                }

                scanf("%d", &numero);

                if (numero >= 1 && numero <= total_acoes) {

                    printf("\nInforme a nova situacao:\n");
                    printf("1 - Concluida\n");
                    printf("2 - Em andamento\n");
                    printf("3 - Pendente\n");

                    scanf("%d", &pesquisa_situacao);

                    while (pesquisa_situacao < 1 || pesquisa_situacao > 3) {
                        printf("\nSituacao invalida! Escolha entre 1 e 3: ");
                        scanf("%d", &pesquisa_situacao);
                    }

                    cadastro[numero - 1].situacao = pesquisa_situacao;

                    printf("\nSituacao atualizada com sucesso!\n");

                } else {

                    printf("\nNumero de acao invalido!\n");
                }
            }
        }

        // RELATORIO GERAL
        else if (opcoes == 5) {

            total_concluidas = 0;

            for (i = 0; i < total_acoes; i++) {

                if (cadastro[i].situacao == 1) {
                    total_concluidas++;
                }
            }

            printf("\n===================================\n");
            printf("          RELATORIO GERAL          \n");
            printf("===================================\n");

            printf("Total de acoes cadastradas: %d\n", total_acoes);

            printf("Total de acoes concluidas: %d\n", total_concluidas);

            printf("Total de participantes: %d\n", total_participantes);

            printf("===================================\n");
        }

        else if (opcoes == 0) {

            printf("\nEncerrando o programa...\n");

        }

        else {

            printf("\nOpcao invalida!\n");

        }

    } while (opcoes != 0);

    return 0;
}


