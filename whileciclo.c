//ejercicio del ciclo while

#include <stdio.h>

int main(){

    int limite;
    printf("ingresa un numero \n");
    scanf("%i", &limite);

    int contador = 1;

while (contador < limite)
{
    printf("aun no salimos del bucle\n");
    contador++;

}
    printf("ya estamos fueran\n");

    return 0;
}