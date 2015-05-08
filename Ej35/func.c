

#include "lib.h"
int validar_entero(int rMin,int rMax)
{
    int num_entero;
    printf("\nIngrese un numero entero entre %d y %d: ",rMin,rMax);
    scanf("%d",&num_entero);
    while(num_entero<rMin || num_entero>rMax)
    {
        printf("\nError, Reingrese el numero ");
        scanf("%d",&num_entero);           
    }
    return num_entero;
}
