
#include <stdio.h>
#include <stdlib.h>

int pedirEnteroRango(char mensaje[], char mensajeError[], int Linf, int Lsup, int repeticiones)
{

    int num;
    int contador = 0;

    printf(mensaje);
    scanf("%d", &num);

    while(num < Linf || num > Lsup)

    {
        contador ++;
        printf( "%s",mensajeError);
        scanf("%d", &num);

        if(contador == 3){

         num = Linf -1;

         break;
        }

    }
    return num;

}

char pedirCaracter(char mensaje[], char mensajeError[], char caracter1, char caracter2){

  char caracterSolicitado;

  printf(mensaje);
  fflush(stdin);
  scanf("%c",&caracterSolicitado);

 while (!(caracterSolicitado == caracter1 || caracterSolicitado == caracter2))
    {
    printf(mensajeError);
    fflush(stdin);
    scanf("%c",&caracterSolicitado);
    }

  return caracterSolicitado;
}
