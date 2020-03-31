#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numeroMax;
    int numeroMin;
    char seguir;
    int flag = 0;
    float promedio = 0;
    int acumuladorPositivos = 0;
    int acumuladorNegativos = 0;
    int contadorPositivos = 0;
    int contadorDeCeros = 0;
    int contadorPares = 0;
    int contadorImpares = 0;

    do
    {

        printf("ingrese un numero: ");
        scanf("%d", &numero);

        if(numero < numeroMin || flag ==0)
        {

            numeroMin = numero;
        }
        if(numero > numeroMax || flag ==0)
        {

            numeroMax = numero;

            flag = 1;
        }

        if(numero<0 )
        {

            acumuladorNegativos = acumuladorNegativos + numero;

        }
        else if (numero>0)
        {

            contadorPositivos ++;

            acumuladorPositivos = acumuladorPositivos + numero;

        }
        else if (numero %2 == 0)
        {

            contadorDeCeros ++;

        }
        if (numero %2 == 0)
        {

            contadorPares ++;


        } else{

        contadorImpares ++;
        }



        printf("desea seguir ingresando numeros?");
        fflush(stdin);
        scanf("%c", &seguir);

    }
    while(seguir == 's');


    promedio = (float) acumuladorPositivos / contadorPositivos;



    printf(" el numero minino es: %d \n", numeroMin);
    printf(" el numero maximo es: %d \n", numeroMax);
    printf(" el promedio es de %f \n", promedio);
    printf(" la cantidad de numeros pares es de %d \n", contadorPares);
    printf(" la cantidad de impares es de %d \n", contadorImpares);
    printf(" la cantidad de ceros es de %d \n", contadorDeCeros);
    printf(" la suma de los negativos es de %d", acumuladorNegativos);


    return 0;
}
