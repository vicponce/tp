#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo,aprobados=0,diciembre=0,marzo=0;
    float promedio,maxProm;
    int c;
    char nombre[25],pregunta='s',maxAlumno[25];
    do{
         c++;
         printf("Ingrese numero de legajo (4 digitos) \n");
         scanf("%d",&legajo);
         printf("Ingrese nombre \n");
         fflush(stdin);
         gets(nombre);
         printf("Ingrese promedio \n");
         scanf("%f",&promedio);
         if(promedio>=7)
              aprobados++;
             else if(promedio<7 && promedio>=4)
                  diciembre++;
                 else
                     marzo++;
         if(c==0)
         {
              maxProm=promedio;
              strcpy(maxAlumno,nombre);            
         }
         else
         {
              if(maxProm<promedio)
              {
                  maxProm=promedio;
                  strcpy(maxAlumno,nombre);                         
              }     
         }            
         
         printf("Quiere continaur?");
         fflush(stdin);
         pregunta=getch();    
    }while(pregunta != 'n');
    printf("Aprobados: %d\n en Diciembre es: %d\n en Marzo es: %d\n",aprobados,diciembre,marzo);
    printf("Alumno mejor promedio: %c",maxAlumno);
    system("PAUSE");
    return 0;
}
