#include "lib.h"

float validarSueldo(float rMin,float rMax)
{
    float numero;
    printf("\nIngrese un numero entre %.2f y %.2f: ",rMin,rMax);
    scanf("%f",&numero);
    while(numero<rMin || numero>rMax)
    {
        printf("\nError, reingrese un numero: ",rMin,rMax);
        scanf("%f",&numero);              
    }
    return numero;                        
}

int validarAnio(int x)
{
    while(x>=2015)
    {
        printf("\nError, reingrese numero");
        scanf("%d",&x);                        
    } 
  }
    
    int validarMes(int c)
    {
        while (c<0 || c>12)
          printf("\nError, reingrese numero");
        scanf("%d",&c);   
    }
        
            int validarDia(int d)
    {
        while (d<0 || d>32)
         {  printf("\nError, reingrese numero");
        scanf("%d",&d);   
        }
        
    
}
