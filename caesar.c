//Nome: José de Queiroz Aragão
//Matricula: 20192045050055
//Github: jose-q

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int n = strlen(argv[1]);
        int i = 0;
        for(int l = 0; l < n; l++)
        {
            if(!isdigit(argv[1][l]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int key = atoi(argv[1]);
         string text = get_string("plaintext: ");
            printf("ciphertext: ");
            int t = strlen(text);
        for(int l = 0; l < t; l++)
         {
            if(isupper(text[l]))
            {
                printf("%c", (((text[l] - 'A') + key) % 26) + 'A');
            }

            else if(islower(text[l]))
            {
                printf("%c", (((text[l] - 'a') + key) % 26) + 'a');
            }

            else
            {
                printf("%c", text[l]);
            }
        }
    }
     else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
    return 0;
}