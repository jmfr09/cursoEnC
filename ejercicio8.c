#include <stdio.h>
#include <stdlib.h>
// libreria necesaria para crear un numero aleatorio
#include <time.h>

int main() {

  // Genera una "semilla" para crear los numeros
  /*en general la semilla seria el numero en el que nos vamos a basar para crear el numero aleatorio
  este se basa en la fecha del ordenador como parametro para generar numeros aleatorios*/
  srand(time(NULL));

  // Crea el numero aleatorio del 1 al 10
  int numeroAleatorio = (rand() % 10) + 1;
  /*
    Lo que hace rand() es generar un numero aleatorio
    entre 0 y RAND_MAX que es 2147483647(depende de tu compu)
  */
  int numeroDelUsuario;
  // Pedimos el numero al usuario
  printf("Dime un numero entre 1 y 10: ");
  scanf("%i", &numeroDelUsuario);
  if(numeroDelUsuario == numeroAleatorio) {
    printf("Felicidades!! Adivinaste\n");
  } else {
    printf("Naa, el numero era %i ese no es pero intenta otra vez\n", numeroAleatorio);
  }
  }