#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[5], resultado;
    printf("Ingresa todos los elementos de un arreglo\n\n");
    printf("Ingresa los valores:\n\n");

    for(int n=0; n<5; n++){
        printf("Valor[%i]: ",n+1);
        scanf("%i",&values[n]);
        if(n == 0)
            resultado= values[n];
        else
            resultado*= values[n];
    }

    printf("\nEl resultado es: %i\n", resultado);

    return 0;
}
