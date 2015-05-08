#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int suma=0;
   int agua,dia;
   int minDia,maxDia,maxAgua, minAgua;
   float promedio;
   for(dia=1;dia<=30;dia++)
   {
      printf("Ingrese la cantidad de agua caida en el dia %d\n",dia);
      scanf("%d",& agua);
      if(dia==1)
      {
         maxAgua=agua;
         minAgua=agua;
      }
      else
      {
         if(maxAgua<agua)
         {
            maxAgua=agua;
            maxDia=dia;
         }
         if(minAgua>agua)
         {
            minAgua=agua;
            minDia=dia;
         }      
      }
      suma+=agua;  
   }
   promedio=suma/dia;
   printf("Dia con mayor lluvia: %d, Agua caida: %d \n  Dia con menor lluvia fue el %d, Agua caida:%d\nEl promedio es %.2f",maxDia,maxAgua, minDia,minAgua,promedio);
   system("PAUSE");
   return 0;
}
