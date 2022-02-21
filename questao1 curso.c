#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)
{
    setlocale (LC_ALL , "Portuguese");
    int i, j, n;

    printf ("Digite o numero de colunas e fileiras que deseja \n");
    scanf ("\n %d" , &n);

    for (i = 1 ; i <=n ; i++){
        for (j = n - i ; j >= 1 ; j--)
            printf (" ");
        for (j = 1 ; j <= i ; j++)
            printf ("*");
            printf ("\n");
    }
    return 0;
}
