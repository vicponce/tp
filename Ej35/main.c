#include<stdio.h>
int validar_entero(int,int);
int main()
{
    int numero,i,suma = 0,max,min;
    float promedio;
    for(i=0;i<20;i++)
    {
        numero = validar_entero(-100,100);   
        if(i==0)
        {
             max = numero;
             min = numero;      
        }
        else
        {
            if(max<numero)
                max = numero;
            if(min>numero)
                min = numero;    
        }
        suma+=numero;
    }
    promedio = (float)suma / i;
    printf("El valor maximo es %d\nEl valor minimos es %d\nEl promedio es %.2f\n",max,min,promedio);
    system("pause");
    return 0;
        
}

int validar_entero(int rMin,int rMax)
{
    int num_entero;
    printf("\nIngrese un numero entero entre %d y %d: ",rMin,rMax);
    scanf("%d",&num_entero);
    while(num_entero<rMin || num_entero>rMax)
    {
        printf("\nError, Reingrese el numero ");
        scanf("%d",&num_entero);           
    }
    return num_entero;
}
