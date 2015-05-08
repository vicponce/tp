#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   float superficie, altura, base;
    printf("Ingrese altura del triangulo");
    scanf("%f", & altura);
    printf("Ingrese base del triangulo");
    scanf("%f", & base);
    superficie=(base*(altura/2));
    printf("la superficie es %f", superficie);    
    system("PAUSE");
    return EXIT_SUCCESS;
}
