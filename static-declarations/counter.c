#include <stdlib.h>
#include <stdio.h>

int scount()
{
   static int counter = 0;

    counter++;
    return (counter);
}

int count()
{
   int counter = 0;

    counter++;
    return (counter);
}

int main()
{   
    int counter;
    int scounter;
    printf("Ejercicio para entender el uso de la palabra reservada 'static' en c\n");
    printf("Escribe un numero hasta donde contar:\n");
    scanf("%i",&counter);
    scounter = counter;
    printf("Vamos a contar hasta %i\n SIN 'static'\n",counter);
    while (counter > 0)
    {
        printf("Contamos %i\n", count());
        counter--; 
    }
    printf("Vamos a contar hasta %i\n CON 'static'\n",scounter);
    while (scounter > 0 )
    {
        printf("Contamos %i\n", scount());
        scounter--;
    }
    return (0);
}
