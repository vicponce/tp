#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int numero;
    printf("Ingrese un numero");
    scanf("%d", & numero);
    if (numero%2==0)
    { printf("El numero es par");}
    else { printf ("el numero es impar");}

    system("PAUSE");
    return EXIT_SUCCESS;
}

