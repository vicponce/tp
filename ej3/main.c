#include <stdio.h>
#include <stdlib.h>


int main()
{ int numero;
  int contador=0;
  int cpositivos=0;
  int cnegativos=0;
while(contador<10)
{    contador=contador+1;
                 printf("ingrese numero");
scanf("%d", & numero );
if (numero>0)
{
cpositivos=(cpositivos+1); }
else 
{cnegativos=cnegativos+1;}  
} 
printf("los positivos son %d \n", cpositivos);
printf("los negativos son %d \n", cnegativos);
    system("PAUSE");
    return EXIT_SUCCESS;
}
