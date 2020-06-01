#include <stdio.h>
#include <stdlib.h>
void swapear(int* x, int* y);
void mostrarVectorP(int* x, int tam);
void cambiarNombre(eEmpleado* x);

typedef struct
{
    int dia;
    int mes;
    int anio;


} eFecha;

typedef struct
{
    char nombre[20];
    int edad;
    float sueldo;
    eFecha fechaIngreso;

} eEmpleado;



int main()
{

    int   a = 4;

    int  b = 6;

    eEmpleado emp1 = {"Jose", 25, 50000, {2, 12, 2019}};

    eEmpleado* p;

    p = &emp1;

    printf("%s %d %.2f %d/%d/%d\n", p->nombre, p->edad, p->sueldo, p->fechaIngreso.dia, p->fechaIngreso.mes, p-> fechaIngreso.anio);
//printf("%p", &a); manera de obtener una direccion de memoria

    cambiarNombre(*emp1);

    printf("%s %d %.2f %d/%d/%d\n", p->nombre, p->edad, p->sueldo, p->fechaIngreso.dia, p->fechaIngreso.mes, p-> fechaIngreso.anio);

    printf("\na =%d y b = %d\n", a, b);
    swapear(&a, &b);
    printf("\na =%d y b = %d\n", a, b);

    int vec[5] = {4,3,2,7,9};
    // &vec[0]; // direc de memoria del primer elemento
    printf("%x\n", &vec[0]);

    mostrarVectorP(&vec, 5);

    return 0;
}

void swapear(int* x, int* y)
{

    int aux;
    aux = *x;
    *x = *y;
    *y = aux;


}

void mostrarVectorP(int* x, int tam)
{
    for(int i =0; i<tam; i++)
    {
        printf("%d", *(x+i));
    }


}

void cambiarNombre(eEmpleado* x)
{

    char nombre[20];
    printf("ingrese nuevo nombre");
    fflush(stdin);
    gets(nombre);

    strcpy(x->nombre, nombre);


}
