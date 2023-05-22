#include <stdio.h>

void entrada01(void) { }
void processamento01(int* years)
{
    *years = 0;
    int g_harvested = 0;
    int seeds = 150;
    while (g_harvested <= 100000000)
    {
        seeds = (seeds-seeds/10)*2*150;
        g_harvested+=seeds;
        *years+=1;
    }
}
void saida01(int* years){ printf("\nq1: %d anos\n\n", *years); }

void questao01(void)
{
    int years;
    entrada01();
    processamento01(&years);
    saida01(&years);
}