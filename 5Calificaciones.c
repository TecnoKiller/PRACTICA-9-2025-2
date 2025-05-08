// SILVA ZINZU ANDRIK LEONARDO
// UTILIZANDO UNA LISTA, CAPTURAR LAS 5 CALIFICACIONS DE UN ALUMNO E IMPRIMIR EL PROMEDIO

#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int list[5];
    int i, calificacion, sumatoria = 0;
    float prom;
   for (i = 0; i < 5; i++)
    {
        printf("calificacion %i: ", i+1);
        scanf("%i", &list[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        sumatoria = sumatoria + list[i];
    }
    prom = sumatoria / 5;
    printf("\n");
    printf("Promedio : %0.2f\n", prom);
  
    
}
