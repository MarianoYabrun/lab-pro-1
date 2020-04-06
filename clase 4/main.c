#include <stdio.h>
#include <stdlib.h>
#include "clase4.h"




int main()

{
    int numero;
    char genero;

    numero = pedirEnteroRango( "ingrese un valor entre 0 y 100:  ", "invalido, reingrese un valor entre 0 y 100:  ", 0, 100, 3);

    if(numero < 1){

        printf("Alcanzo el numero maximo de intentos \n");
    } else {


    printf("el numero que ingreso fue: %d \n\n ", numero);
    }


    genero = pedirCaracter("ingrese genero(m o f): ", "genero invalido reingrese: ", 'm' , 'f');

    printf("El genero que ingreso fue %c", genero);
    return 0;
}


