#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float altura,max;
    int inicial=0, i;
    char nombre[51],alumno[24];
    for (i=0; i<5; i++){
        printf("Ingrese nombre y apellido\n");
        fflush(stdin); 
        gets(nombre);
        printf("Ingrese altura \n");
        scanf("%f",&altura);
        if(inicial==0)
        {
           max=altura;
           strcpy(alumno,nombre);
           inicial=1;
        }
           if(max<altura)
            {
                max=altura;
           strcpy(alumno,nombre);
            }
        }
 

  
    printf("El alumno mas alto es %c y mide %f",alumno,max);
   
  system("PAUSE");	
  return 0;
}
