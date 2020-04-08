#include <stdio.h>
#include <stdlib.h>

int factorial(int );
int main()
{
   int valor,result;

printf("\nIngrese el numero que quiere calcular su factorial: ");

scanf("%d",&valor);
 while(valor<0){
    printf("No es posible calcular el Factorial de numeros negativos, reingrese el numero: ");
    scanf("%d",&valor);
}
result=factorial(valor);

printf("\nEl factorial de %d es %d",valor,result);

    return 0;
}
int factorial(int n)
{
int resp;

if(n<=1){
resp =1;
 }else{
resp =n* factorial(n-1); //recursividad
 }
 return resp;
}
