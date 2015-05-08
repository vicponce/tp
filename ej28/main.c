#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int tarifa,horas,salario;
    char nombre[25],pregunta='s';
    do{         
         printf("Ingrese nombre\n");
         fflush(stdin);
         gets(nombre);
         printf("Ingrese tarifa por hora \n");
         scanf("%d",&tarifa);
         printf("Ingrese horas semanales \n");
         scanf("%d",&horas);
      salario=horas*tarifa;
         printf("Salario del trabajador %s es: %d\n",nombre,salario);
         printf("Quiere continuar?\n");
         pregunta=getch();
         }while(pregunta != 'n'); 
  
  system("PAUSE");	
  return 0;
}
