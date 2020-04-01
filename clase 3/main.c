#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int num2;
    int resultado;

    printf(" ingrese un numero: ");
    scanf("%d", &num1);

     printf(" ingrese otro numero: ");
    scanf("%d", &num2);

   resultado = sumarv1(num1, num2);

    printf("el resultado es %d \n\n", resultado);

    return 0;
}








