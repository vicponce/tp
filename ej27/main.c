#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i ,inteligencia;
    int cultura,belleza,min_puntaje;
    int max_cultura, acumuladorI=0,acumuladorC=0,acumuladorB=0;
    char nombre[25],nombre_menor[25],max_nombre[25];
    for(i=1;i<=20;i++)
    {
        printf("Ingrese nombre \n");
        fflush(stdin);
        gets(nombre);
        printf("Ingrese puntos por inteligencia \n" );
        scanf("%d",&inteligencia);
        printf("Ingrese puntos por cultura general\n");
        scanf("%d",&cultura);
        printf("Ingrese puntos por belleza\n");
        scanf("%d",&belleza);
        acumuladorI=acumuladorI+inteligencia;
        acumuladorB=acumuladorB+belleza;
       acumuladorC=acumuladorC+cultura;
        if(i==1)
        {
            strcpy(max_nombre,nombre);
            max_cultura=cultura;           
        }                    
        else
        {
            if(max_cultura<cultura)
            {
                strcpy(max_nombre,nombre);
                max_cultura=cultura;
            }
        }     
    }    
    if(acumuladorC<acumuladorI && acumuladorI<acumuladorB)
    {
        min_puntaje=acumuladorC;
        strcpy(nombre_menor,"Cultura");                               
    }
    else if(acumuladorI < acumuladorB)
    {
         min_puntaje=acumuladorB;
         strcpy(nombre_menor,"Inteligencia");
    }    
    else
    {
        min_puntaje=acumuladorB;  
        strcpy(nombre_menor,"Belleza");  
    }
    printf("Participante con mas puntos: %s\n",max_nombre);
    printf("Total puntos: Cultura general  %d, Inteligencia: %d y Belleza: %d\n",acumuladorC,acumuladorI,acumuladorB);
    printf("Puntaje menor %s: %d",nombre_menor,min_puntaje);
  
  system("PAUSE");	
  return 0;
}
