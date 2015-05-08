#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1,num2,aux,aux2;
    printf("Ingrese un numero: ");
    scanf("%d",&num1);
    printf("ingrese otro numero : ");
    scanf("%d",&num2);
    aux=num1;
    aux2=num2;
    num1=aux;
    num2=aux2;
    printf("Numero 1: %d \n Numero 2: %d\n",num1,num2);
    system("PAUSE");
    return 0;
}
