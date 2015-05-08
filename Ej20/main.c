#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int valorHora;
int horasMes,bruto, antiguedad;
    float neto;
    float descuentos;
    char nombre[50];
    printf("Ingrese el valor hora del empleado \n");
    scanf("%d",&valorHora);

    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(nombre);
    printf("Ingrese antiguedad: \n");
    scanf("%d",&antiguedad);

    printf("Ingrese cantidad de horas mensuales \n");
    scanf("%d",& horasMes);
    bruto=(valorHora*horasMes) + (antiguedad*30);
    descuentos=bruto*0.13;
    neto=bruto-descuentos;
     printf("\n\t   RECIBO \n");
    printf("Empleado: %s\nAntiguedad",nombre,antiguedad);
    printf(" %d\nValor hora: %d\n Sueldo Bruto: %.2d\nDescuento: %.2f\n Sueldo Neto: %2f",valorHora,bruto,descuentos,neto);
  
  system("PAUSE");	
  return 0;
}
