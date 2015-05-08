#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int numero;

        printf("\n Ingrese numero: ");
        scanf("%d",&numero);
        fflush(stdin);
  
  printf("\n\tNUMERO    CUADRADO    CUBO\n\n");
  for(i=1;i<numero+1;i++)
  {
   printf("\t  %d\t       %d \t%d \n",i,i*i,i*i*i);                
  }
    system("PAUSE");	
  return 0;
}
