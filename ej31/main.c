#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int tarifa,horas,salario;
    char nombre[25],pregunta='s';
    int contador=0;
    int maximo, minimo;
    int suma;
    float promedio;
    char empleadoMin[20], empleadoMax[20];
    
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
         suma=suma+salario;
         printf("Quiere continuar?\n");
         fflush(stdin);
          if(contador==1)
         {
             minimo=salario;
             maximo=salario;
             strcpy(empleadoMin,nombre);
             strcpy(empleadoMax,nombre);
         }
         else
         {
             if(minimo>salario)
             {
                 minimo=salario;
                 strcpy(empleadoMin,nombre);
             }
             if(maximo<salario)
             {
                 maximo=salario;
                 strcpy(empleadoMax,nombre);
             }
             }
             
         pregunta=getch();
         }while(pregunta != 'n'); 
  printf("Cantidad de trabajadores: %d \n", contador);
  printf("Empleado mayor salario %c: %d, \n Empleado minimo salario %c: %d \n", empleadoMax, maximo, empleadoMin, minimo);
  promedio=suma/contador;
  printf("Costo empresa en salarios: %d, promedio salario %f \n", suma, promedio);
  system("PAUSE");	
  return 0;
}
