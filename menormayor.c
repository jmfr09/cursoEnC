/*mis estimados estos ejercicios son de ayuda para que lo analizen si los hacen mejor que lo que lo hago yo
es mejor. sigan mejorando su logica*/
/*el algoritmo tiene que ser el siguiente
inicio
pedir que ingrese un numero
almacenar ese numero en una variable
pedir un segundo numero y alamacenarlo tambien
comprar el primero con el segundo
si el primero es menor imprimir un mensaje diciendo eso
si no imprimir un mensaje diciendo que el numero menor es el segundo.
fin.*/
//libreria para poder utilizar los flujos de entrada/salida
#include <stdio.h>

int main(){ //main

int a,b;    //variables de tipo enteras

//pedimos al usuario ingresar valor
    printf("ingrese un numero entero cualquieran\n");
    scanf("%d", &a); //guardamos ese valor
    
    printf("ingrese el segundo numero entero cualquera\n");
    scanf("%d",&b);
//condicionales si es de una sola linea no se ocupan las llaves 
    if(a < b)
        printf("El primer %d numero es menor\n", a);

    else
        printf("El segundo %d numero es menor\n",b);
    return 0;
}