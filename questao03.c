#include <stdio.h>

void entrada03(float* investimento, float* premio)
{
    printf("quantidade investida(1): ");
    scanf("%f", &investimento[0]);
    printf("quantidade investida(2): ");
    scanf("%f", &investimento[1]);
    printf("quantidade investida(3): ");
    scanf("%f", &investimento[2]);
    printf("valor do premio: ");
    scanf("%f", premio);
}

void processamento03(float* investimento, float* premio, float* dividendo)
{
    float total = investimento[0] + investimento[1] + investimento[2];
    float div[3];
    for(int i=0; i<3; i++)
    {
        dividendo[i] = investimento[i]/total * (*premio);
    }
}

void saida03(float* dividendo)
{
    printf("\nq3:\n");
    printf("apostador 1 recebera %f reais\n", dividendo[0]);
    printf("apostador 2 recebera %f reais\n", dividendo[1]);
    printf("apostador 3 recebera %f reais\n", dividendo[2]);
    printf("\n");
}

void questao03(void)
{
    float premio;
    float investimento[3];
    float dividendo[3];

    entrada03(investimento, &premio);
    processamento03(investimento, &premio, dividendo);
    saida03(dividendo);
}