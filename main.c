#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa onde o usu�rio ir� digitar um n�mero referente ao
m�s do ano. O programa deve identificar qual o m�s do ano referente ao
n�mero digitado. Caso o n�mero digitado n�o corresponda a nenhum
m�s deve ser exibida uma mensagem indicando que o n�mero digitado
� inv�lido.
1 -> Janeiro
2 -> Fevereiro
3 -> Mar�o
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
        case '3': printf ( "mar�o" ); break;
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
