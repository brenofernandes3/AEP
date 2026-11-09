#include <stdio.h>
#include <stdlib.h>

int main() {
    char cad_escola[100], tema[100], resp[100];
    int turma, data;

    printf("\n================================\n");
    printf("       CADASTRO DE PROJETO\n");
    printf("================================\n");

    printf("\nInsira o nome da escola: \n");
    scanf("%d", &cad_escola);

    printf("\nInforme sua turma: \n");
    scanf("%d", &turma);

    printf("\nInforme o tema do projeto: \n");
    scanf("%d", &tema);

    printf("\nInforme a data prevista: \n");
    scanf("%d", &data);

    printf("\nResponsavel pelo projeto: \n");
    scanf("%d", &resp);

    printf("\n================================\n");
    printf("       CADASTRO CONCLUIDO!\n");
    printf("================================\n");

    printf("\n===== DADOS DO PROJETO =====\n");
    printf("Escola: %d\n", cad_escola);
    printf("Turma: %d\n", turma);
    printf("Tema: %d\n", tema);
    printf("Data: %d\n", data);
    printf("Responsavel: %d\n", resp);
    printf("====================================\n");

    return 0;
}
