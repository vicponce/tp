#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int sueldo,legajo,sexo;
int contmujeres=0,conthombres=0;
    char nombre[25];
    char pregunta='s';
    do{
         printf("Ingrese numero de legajo de cuatro digitos \n");
         scanf("%d",& legajo);
         while(legajo<1000 || legajo>9999)
         {
            printf("Error, reingrese legajo\n");
            scanf("%d",&legajo);
         }
         printf("Ingrese nombre\n");
         fflush(stdin); 
         gets(nombre);
         printf("Ingrese sueldo mayor a 0\n");
         scanf("%d",& sueldo);
         printf("Ingrese sexo: femenino(1) o MASCULINO(2)\n");
           fflush(stdin); 
         scanf("%d",&sexo);
         if(sexo==1 && sueldo>500)
         {
            contmujeres=contmujeres+1;
         }
         if(sexo==2 && sueldo<400)
         {
            conthombres=conthombres+1;
         }
         printf("Quiere seguir? s/n");
         pregunta=getch();
         }while(pregunta!='n');
    printf(" Mujeres que ganan mas de 500: %d, Hombres que ganan menos de 400: %d", conthombres, contmujeres);
  system("PAUSE");	
  return 0;
}
