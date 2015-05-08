#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int edad,numerosocio,deporte,tenis=0,rugby=0,voley=0,hockey=0,futbol=0;
    int edad_tenis=0,edad_rugby=0,edad_voley=0,edad_hockey=0,edad_futbol=0;
    char nombre[25],pregunta='s';     
    do{
         printf("Ingrese numero de socio");
         scanf("%d",&numerosocio);
         printf("Ingrese apellido y nombre \n");
         fflush(stdin);
         gets(nombre);
         printf("Ingrese edad \n");
         fflush(stdin);
         scanf("%d",&edad);
         printf("Deporte que practica: 1:Tenis \n 2:Rugby  \n 3:Voley  \n 4:Hockey  \n 5:Futbol\n");
         scanf("%d",&deporte);
         switch(deporte)
         {
             case 1:
                  tenis++;
                  edad_tenis=edad_tenis+edad;
                  break;
             case 2:
                  rugby++;
                  edad_rugby=edad_rugby+edad;
                  break;
             case 3:
                  voley++;
                  edad_voley=edad_voley+edad;
                  break;
             case 4:
                  hockey++;
                  edad_hockey=edad_hockey+edad;
                  break;
             case 5:
                  futbol++;
                  edad_futbol=edad_futbol+edad;
                  break;           
         }
         printf("Quiere seguir?\n");
         fflush(stdin);
         pregunta=getch();
    }while(pregunta != 'n');
    
    
    printf("La cantidad que practica Tenis es: %d y Rugby es: %d\n",tenis,rugby);
    printf(" Promedio de edades: \n   Tenis: %.2f\n   Rugby: %.2f\n   Voley:  %.2f\   Hockey: %.2f\n   Futbol %f\n",(float)edad_tenis/tenis,(float)edad_rugby/rugby,(float)edad_voley/voley,(float)edad_hockey/hockey,(float)edad_futbol/futbol);
    system("PAUSE");
    return 0;
  

}
