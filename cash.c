//Nome: José de Queiroz Aragão
//Matricula: 20192045050055
//Github: jose-q
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int centavos;

    do
    {
        float dollars= get_float("Troco:");
        centavos = round(dollars * 100);
    }
    while (centavos <= 0);

    int vintecinco = centavos / 25;
    int dez = (centavos % 25) / 10;
    int cinco = ((centavos % 25) % 10) / 5;
    int um = ((centavos % 25) % 10) % 5;

    printf("%d\n", vintecinco + dez + cinco + um);
}