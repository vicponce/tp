#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int peso,menos=0,mas=0;
    char tecla = 's';
    do{
         printf("Ingrese peso del trabajador\n");
         scanf("%d", & peso);
         while(peso<1)
         {
            printf("Error,reingresar\n");
            scanf("%d",&peso);
         }
         if(peso>80)
         {
            mas=mas+1;
         }
         else
         {
             menos=menos+1;
         }
         printf("Quiere seguir? s/n \n ");
         tecla = getch();
         }while(tecla != 'n');
         printf("Cantidad que pesan menos de  80kg: %d y los mayores a 80kg: %d", menos,mas);
         getch();
    return 0;
}
