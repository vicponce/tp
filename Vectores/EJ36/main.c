#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{    int numero[10]={0},ind,i;
    for(i=0;i<10;i++)
    {
        {

            printf("\nIndique posicion del vector: 1 al 10");
            scanf("%d",&ind);
                  while(ind<1 || ind>10)
        {
            printf("\nError, Reingrese: ");
            scanf("%d",&ind);
        }
        }
        
        printf("\nIngrese numero: ");
        scanf("%d",&numero[ind-1]);
    }
    for(i=0;i<10;i++)
    {
        printf("\nNumero de Posicion %d: %d",ind+1,numeros[i]);                         
    }
  
  system("PAUSE");	
  return 0;
}








//for (k=0; k<10; k++)
// if (indices[k]==-1)
  //indices[k]=indice;
  
  //  for (j=0; j<10; j++)
 //   { if (ind==indices[j]) {
//     break; }
// }
   //if (j==10)   //despues de ind--)))
   //{indices[0]=ind;
// } 

