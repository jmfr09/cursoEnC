#include <stdio.h>


int main(){

    int a,b,c;
    
    printf("ingrese los valores \n");
    scanf("%i", &a); scanf("%i", &b);

    c = a;
    a = b;
    b = c;

    printf("los valores son %i \n %i",a,b);


    return 0;
}