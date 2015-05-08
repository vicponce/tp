#include <stdio.h>
#include <stdlib.h>

int main()
{    int importe;
    int vendedor;
    int vendedor1=0,vendedor2=0,vendedor3=0;
    do{
         printf("Ingrese numero del vendedor (1-3) o 0 para salir\n");
         vendedor = getch();
         while(vendedor<'0' || vendedor>'3')
         {
            printf("Error, reingrese vendedor\n");
            vendedor = getch();
         }
         if(vendedor!='0')
         {
            printf("Ingrese importe");
            scanf("%d",& importe);
         }
         switch(vendedor)
         {
            case '1':
                vendedor1=vendedor1+importe;
                 vendedor1=vendedor1*.05;
                 break;
            case '2':
                vendedor2=vendedor2+importe;
                 vendedor2=vendedor2*.05;
                 break;
            case '3':
                 vendedor3=vendedor3+importe;
                     vendedor3=vendedor3*.05;
                 break;
         }
         }while(vendedor!='0');
         printf("Comisiones: \n  vendedor 1: %d \n vendedor: 2 %d\n vendedor 3 %d",vendedor1,vendedor2,vendedor3);
         system("PAUSE");
         return 0;         
}
