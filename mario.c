// Nome: José de Queiroz Aragão
// Matricula: 20192045050055
// Github: jose-q
#include <cs50.h>
#include <stdio.h>

int main(void)
{
      int altura;  
      int espacos;
      int j;
    
    do
    {
        altura = get_int("Escolha a altura entre 1 e 8: ");
    }
    while (altura < 0 || altura > 8);
    
    
    for (int i = 0; i < altura; i++)
    {
        // para printar os epaços
        for (espacos = (altura - i); espacos >= 2; espacos--)
        {
            printf(" ");
    
        }
        // para printar os #
        for (j = 0; j <= (i + 1); j++)
        {
            printf("#");
        }
        printf("\n");
    }
}