#include <stdio.h>


int main(){

    int Ilist [3];
        Ilist[0] = 2;
        Ilist[1] = 4;
        Ilist[2] = 6;

    float Flist[] = {2.2, 4.4, 6.6, 8.8, 10.10};

    char Clist[4];
        Clist[0] = 'a';
        Clist[1] = 'b';
        Clist[2] = 'c';
        Clist[3] = 'd';

        printf("imprimir enteros %i \n", Ilist[2]);
        printf("imprimir flotantes %g\n", Flist[3]);
        printf("imprimir chars %c%c%c%c\n", Clist[0], Clist[1], Clist[2], Clist[3]);

    return 0;
}