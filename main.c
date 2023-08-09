#include <stdio.h>
#include <stdlib.h>

/*Faça um programa onde o usuário irá digitar um número referente ao
mês do ano. O programa deve identificar qual o mês do ano referente ao
número digitado. Caso o número digitado não corresponda a nenhum
mês deve ser exibida uma mensagem indicando que o número digitado
é inválido.
1 -> Janeiro
2 -> Fevereiro
3 -> Março
4 -> Abril
5 -> Maio
6 -> Junho
7 -> Julho
8 -> Agosto
9 -> Setembro
10 -> Outubro
11 -> Novembro
12 -> Dezembro*/
/*desenvolvedor: fischerxp*/

int main()
{
    int mes;
    printf ("insira um numero:");
    scanf ("%d", &mes);
    switch (mes)
    {
        case '1': printf ( "janeiro" ); break;
        case '2': printf ( "fevereiro" ); break;
        case '3': printf ( "março" ); break;
        case '4': printf ( "abril" ); break;
        case '5': printf ( "maio" ); break;
        case '6': printf ( "junho" ); break;
        case '7': printf ( "julho" ); break;
        case '8': printf ( "agosto" ); break;
        case '9': printf ( "setembro" ); break;
        case '10': printf ( "outubro" ); break;
        case '11': printf ( "novembro" ); break;
        case '12': printf ( "dezembro" ); break;
        default: printf ( "mes invalido" );
    }
    return 0;
}
