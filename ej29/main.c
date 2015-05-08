#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int tarifa,horas,salario;
    char nombre[25],pregunta='s';
    int contador=0;
    do{         
         printf("Ingrese nombre\n");
         fflush(stdin);
         gets(nombre);
         printf("Ingrese tarifa por hora \n");
             fflush(stdin);
         scanf("%d",&tarifa);
         printf("Ingrese horas semanales \n");
         fflush(stdin);
         scanf("%d",&horas);
      salario=horas*tarifa;
         printf("Salario del trabajador %s es: %d\n",nombre,salario);
             fflush(stdin);
         contador++;
         printf("Quiere continuar?\n");
         fflush(stdin);
         pregunta=getch();
         }while(pregunta != 'n'); 
  printf("Cantidad de trabajadores: %d", contador);
  system("PAUSE");	
  return 0;
}
