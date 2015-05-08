#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  int numero;
char rta;
 printf("Quiere ingresar nro");
   scanf ("%c", & rta);
   fflush(stdin);
   while (rta=='s')
   { printf("Ingrese numero del 1 al 7");
     scanf("%d", numero);
     fflush(stdin);
        switch(numero)
      {
	 case 1:
	   printf("Lunes");
	   break;
	 case 2:
	   printf("Martes") ;
	   break;
	 case 3:
	   printf("Miercoles");
	   break;
	 case 4:
	    printf("Jueves");
	    break;
	 case 5:
	    printf("Viernes");
	     case 6:
	    printf("Sabado");
     	case 7:
	    printf("Domingo");
	    default:
                printf("Del 1 a al 7");
                scanf("%d", numero);
      }
     printf("Quiero ingresar otro nro");
     scanf ("%c", & rta);
     }

  system("PAUSE");	
  return 0;
}
