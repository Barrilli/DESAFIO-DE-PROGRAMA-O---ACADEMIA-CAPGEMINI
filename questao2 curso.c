#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (void)
{
    setlocale (LC_ALL , "Portuguese");
    int n, d;
    char l[20];

    printf ("\n Digite sua senha \n\n");
    gets (l);

    n = strlen (l);

    d = 6 - n;

    if (n >= 6){
        printf ("\n A senha digitada tem %d " , n);
        printf ("caracteres! Senha aceita! \n");
    } else
         if (n <= 5){
        printf ("\n A senha digitada tem menos de 6 caracteres! \n");
        printf ("\n Faltam %d" , d);
        printf (" caracteres para que a senha seja considerada segura, foram digitados apenas %d.\n" , n);

    printf ("\n Digite uma nova senha \n");
    gets (l);

    printf ("%s" , l);
    }
return 0;
}
