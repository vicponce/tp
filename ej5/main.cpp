#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int numero;
    printf("Ingrese un numero");
    scanf("%d", & numero);
    if (numero>0)
    { printf("El numero es positivo");}
    else { printf ("el numero es negativo");}

    system("PAUSE");
    return EXIT_SUCCESS;
}

