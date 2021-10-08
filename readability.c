//Nome: José de Queiroz Aragão
//Matricula: 20192045050055
//Github: jose-q

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    
    string texto = get_string("Texto: ");

    
    int i = strlen(texto);
    int letras = 0;
    int palavras = 0;
    int sentenca = 0;

    // Loop para contar
    for (int x = 0; x < i; x++)
    {
        // Contagem de letras
        char c = texto[x];
        if (isalpha(c) != 0)
        {
            letras++;
        }

        // Contagem de palavras
        if (c == ' ')
        {
            palavras++;
        }

        // Contagem de sentenças
        if (c == '.' || c == '!' || c == '?')
        {
            sentenca++;
        }
    }


    palavras = palavras + 1;

    // Calculando
    float L = ((float)letras / (float)palavras) * 100;
    float s = ((float)sentenca / (float)palavras) * 100;
    float subindex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(subindex);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Antes do Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}