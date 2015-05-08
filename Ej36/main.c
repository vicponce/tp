#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char *argv[])
{  
int fecha,contador,mas_antiguo, dia, mes;
    char nombre[25];
    float sueldo;
    for (contador = 0;contador<2;contador++)
    {
        printf("\nIngrese nombre del empleado:: ");
        fflush(stdin);
        gets(nombre);
        sueldo = validarSueldo(0,1000000);
        
        printf("\nIngrese Año Ingreso");
       scanf("%d", &fecha);   
       validarAnio(fecha);
       printf("Ingrese mes Ingreso");
       scanf("%d", &mes);
       validarMes(mes);
       printf("Ingrese dia Ingreso");
       scanf("%d", &dia);
       validarDia(dia); }
       
    
        
    
    system("PAUSE");
    return 0;
}

