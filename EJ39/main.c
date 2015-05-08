#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(int argc, char *argv[]) {
	int num,suma=0;
	do{
		printf("Ingrese numero entero\n");
		scanf("%d",&num);
		suma=suma+num;
	}while(validaS_N()==1);
	
	printf("Suma: %d",suma);
  
  system("PAUSE");	
  return 0;
}
