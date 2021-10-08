//Nome: José de Queiroz Aragão
//Matricula: 20192045050055
//Github: jose-q

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


void subs(char *, char *);

int main(int argc, char *argv[])
{
    //validação key
    if (argc != 2)
    {
        printf("Use: ./substituição key\n");
        return 1;
    }
    if (strlen(argv [1]) != 26)
    {
        printf("Key deve conter 26 caracteres.\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Primeiro checar se é alfabetico
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Key deve conter somente caracteres alfabeticos. \n");
            return 1;
        }
        for (int r = i + 1; r < strlen(argv[1]); r++)
        {
            if (toupper(argv[1][r]) == toupper(argv[1][i]))
            {
                printf("Key deve conter apenas um de cada caractere alfabetico. \n");
                return 1;
            }
        }
    }
    //plaintext
    string texto = get_string("Plaintext: ");
    //ciphertext
    subs(texto, argv[1]);
}

void subs(char *t, char *k)
{
    printf("ciphertext: ");
    
    for (int i = 0; i < strlen(t); i++)
    {
        if (isalpha(t[i]) != 0)
        {
            if (isupper(t[i]) != 0)
            {
                int index = t[i] - 'A';
                printf("%c", toupper(k[index]));
            }
            else
            {
                int index = t[i] - 'a';
                printf("%c", tolower(k[index]));    
            }
        }
        else
        {
            printf("%c", t[i]);
        }
    }
    printf("\n");
}