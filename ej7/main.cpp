#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{  float decimal, pies, pulgadas;
  printf("Ingrese centimetros decimal");
  scanf("%f", & decimal);
  pies=(decimal*0.032808);
  pulgadas=(decimal*0.39370);   //arreglar
  printf("Pies %f, pulgadas %f", pies, pulgadas);

    system("PAUSE");
    return EXIT_SUCCESS;
}
