#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int numero1, numero2, numero3, numero4, numero5;
  float media=0;
  printf("Ingrese un numero");
  scanf ("%d", & numero1);
   printf("Ingrese otro numero");
  scanf ("%d", & numero2);
   printf("Ingrese otro numero");
  scanf ("%d", & numero3);
   printf("Ingrese otro numero");
  scanf ("%d", & numero4);
   printf("Ingrese otro numero");
  scanf ("%d", & numero5);
  media=((numero1+numero2+numero3+numero4+numero5)/5);
  printf("%f", media); 
  system("PAUSE");	
  return 0;
}
