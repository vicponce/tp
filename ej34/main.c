#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int operacion,num1,num2;
    float resultado;
    char pregunta='s';
    do{
         printf("Ingrese operacion:  1:Suma -- 2:Resta -- 3:Multiplicacion -- 4:Division\n");
         scanf("%d",&operacion);
         
         printf("Ingrese numero 1\n");
         scanf("%d",&num1);
         printf("Ingrese numero 2\n");
         scanf("%d",&num2);

         switch(operacion)
         {
              case 1:
                   resultado = num1+num2;
                   break;
              case 2:
                   resultado = num1-num2;
                   break;
              case 3:
                   resultado = num1*num2;
                   break;
              case 4:
                   if(num2==0)
                   {
                       printf("Indeterminado \n");
                       resultado = 0;
                   }
                   else
                       resultado = (float)num1/num2;
                   break;         
         }
         printf("El resultado es: %f\n",resultado);
         fflush(stdin);
         printf("Quiere seguir s|n? \n\n");
         fflush(stdin);
         pregunta=getch();
         
    }while(pregunta != 'n');    
  
  system("PAUSE");	
  return 0;
}
