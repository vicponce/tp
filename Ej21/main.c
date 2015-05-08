#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int i,num,resultado;
    printf("Ingrese un numero entre 0 y 10 ");
    scanf("%d",& num);
    while(num<0 || num>10)
    {
        printf("ERROR, reingresar \n");
        scanf("%d",&num);               
    }
    for(i=1;i<11;i++)
    {
        resultado=num*i;
        printf("%d X %d= %d\n",num,i,resultado);                        
    }
    system("PAUSE");
    return 0;
}
