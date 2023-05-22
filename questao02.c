#include <stdio.h>

int situacao_aluno(float media, int faltas, int aulas)
{
    if (aulas<=0 || media < 60 || (float)faltas*100/(float)aulas > 25) { return 0; }
    else { return 1; }
}

void entrada02(float* media, int* faltas, int* aulas)
{
    printf("media: ");
    scanf("%f", media);
    printf("faltas: ");
    scanf("%d", faltas);
    printf("aulas: ");
    scanf("%d", aulas);
}

void processamento02(float* media, int* faltas, int* aulas, int* resultado)
{
    *resultado = situacao_aluno(*media, *faltas, *aulas);
}

void saida02(int* resultado)
{
    printf("\nq2: ");
    if (*resultado == 0) { printf("reprovado\n"); }
    else { printf("aprovado\n"); }
    printf("\n");
}

void questao02(void)
{
    float media;
    int faltas, aulas, resultado;
    
    entrada02(&media, &faltas, &aulas);
    processamento02(&media, &faltas, &aulas, &resultado);
    saida02(&resultado);
}