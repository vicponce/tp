#include "lib.h"

int validarLegajo(legajo)
{
    while(legajo<1000 || legajo>9999)
    {
        printf("\nError, Reingrese: ");
        scanf("%d",&legajo);           
    }
    return legajo;
}

int validarHora (int c)
{ 
		while(c<0000 || c>2359)
	{
		printf("\nError, reingrese hora: ");
		scanf("%d",&c);
	}
}

