#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int suma=0,nota;
int c=0;
    char alumno[25],pregunta='s';
    float promedio;
    do{
         printf("Ingrese nombre alumno\n");
         fflush(stdin);
         gets(alumno);
         for(c=0;c<6;c++)
         {
             printf("Ingrese nota %d\n",c+1);
             scanf("%d",&nota);
             suma=suma+nota;         
         }
         promedio=suma/c;         
         printf("NOMBRE DEL ALUMNO: %s  PROMEDIO: %.2f\n",alumno,promedio);
         printf("Quiere ingresar otro alumno?");
         pregunta = getch();      
    }while(pregunta!='n');
  system("PAUSE");	
  return 0;
}
