#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char *argv[])
{  int contador=0;
	int legajo,hora;
	char nombre[20],pregunta='s';
	 do{
	 	printf("\nIngrese el nombre: ");
	 	fflush(stdin);
	 	gets(nombre);
    printf("\nIngrese numero de legajo");
    scanf("%d",&legajo);
     validarLegajo(legajo);
	 printf("\n Ingresar Hora de entrada (HHMM): ");
	scanf("%d",&hora);
	validarHora(hora);
	if (hora>910)
	{
	contador++;}

	 	printf("Quiere seguir?");
	 	pregunta=getch();
	 	
	 }while(pregunta!='n');	
	printf("Trabajadores despues 9:10 %d \n\n", contador);
  
  system("PAUSE");	
  return 0;
}
