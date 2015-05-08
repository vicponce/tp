#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int dia , mes , diamin , diamax, max,min,temperaturamax,temperaturamin;
    for(dia=1;dia<=30;dia++)
    {
         printf("Ingrese temperatura maxima del dia %d\n",dia);
         scanf("%d",&temperaturamax);
         printf("Ingrese temperatura minima del dia %d\n",dia);
         scanf("%d",&temperaturamin);
         if(dia==1)
         {
             min=temperaturamin;
             max=temperaturamax;
             diamax=dia;
             diamin=dia;      
         }
         else
         {
             if(max<temperaturamax)
             {
                 max=temperaturamax;
                 diamax=dia;
             }
             if(min>temperaturamin)
             {
                 min=temperaturamin;
                 diamin=dia;                        
             }
         }
    }
    printf("Dia %d fue el de  menor temperatura: %d grados  Dia %d Fue el de mayor temperatura: %d grados",diamin,min,diamax,max);
  
  system("PAUSE");	
  return 0;
}
