#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int numero, cuadrado;
  printf("Ingrese numero");
  scanf("%d", & numero);
  if (numero==0)
  { printf("ERROR, numero debe ser mayor que cero");
}
cuadrado=(numero*numero);
printf("%d", cuadrado);
  
  system("PAUSE");	
  return 0;
}
