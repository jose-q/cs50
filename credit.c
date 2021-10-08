//Nome: José de Queiroz Aragão
//Matricula:20192045050055
//git hub: jose-q

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    long long numerocartao;

    do
    {
        printf("Qual o numero do seu cartão? ");
        scanf("%lld", &numerocartao);
   
    }
    while (numerocartao < 0);

    printf("Numero do cartão: %lld\n", numerocartao);


    int count = 0;
    long long digito = numerocartao;
    while (digito > 0)
    {
        digito = digito/10;
        count++;
    }

    // Checa se o cartao tem o numero valido de digitos
    if ((count != 13) && (count != 15) && (count != 16))
    {
        printf("Invalido\n");
        exit(1);
    }


    int number[count];
    for (int i = count - 1; i >= 0; i--)
    {
        number[i] = numerocartao % 10;
        numerocartao = numerocartao / 10;
    }


    int somadigito = 0;
    for (int i = count - 2; i >= 0; i-=2)
    {
        int produto = number[i] * 2;
        somadigito += produto % 10;
        if (produto > 9){
            somadigito += produto / 10;
        }
    }
    
   
    int somaoutro = 0;
    for (int i = count - 1; i >= 0; i-=2)
    {
        somaoutro += number[i];
    }

   
    int somatotal = somaoutro + somadigito;

    // Se o ultimo digito não for zero, é invalido
    if (somatotal % 10 != 0) {
        printf("Cartão Invalido\n");
        exit(1);
    }

    printf("Cartão é Valido \n");

    // Checa o numero do cartão baseado no comprimento e no primeiro digito
    if (count == 13){
        printf("VISA\n");
    } else if (count == 15){
        printf("AMEX\n");
    } else if (count == 16){
        if (number[0] == 5){
            printf("MASTERCARD\n");
        } else {
            printf("VISA\n");
        }
    }

    return 0;
}