// Chiedi una sequenza di numeri interi positivi (si stoppa se l'utente inserisce -1)
// restituisci il numero complessivo dei numeri che sono multipli di 3 o 5 o 7

#include <stdio.h>

int cont = 0, n = 0;

int main(void)
{
    while (n != -1)
    {
        printf("Inserisci un numero\n");
        scanf("%d", &n);
        if ((n > 0) && ((n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0)))
        {
            cont++;
        }
    }
    printf("Il numero complessivo dei numeri che sono multipli di 3 o 5 o 7 sono %d", cont);
    return 0;
}