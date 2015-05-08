#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{ int conta=0,conte=0,conti=0,conto=0,contu=0,cont;
   char letra;
   for (cont=1;cont<6;cont=cont+1)
   {
      printf("\ningrese la letra numero %d: ",cont);
      scanf(" %c",&letra);
      letra=tolower(letra);
      if (letra=='a')
	 {
	 conta=conta+1;
	 }
      if (letra=='e')
	 {
	 conte=conte+1;
	 }
      if (letra=='i')
	 {
	 conti=conti+1;
	 }
      if (letra=='o')
	 {
	 conto=conto+1;
	 }
      if (letra=='u')
	 {
	 contu=contu+1;
	 }
   }
   printf("Presione una tecla para continuar");
  
   printf("\nLa cantidad de A son: %d",conta);
   printf("\nLa cantidad de E son: %d",conte);
   printf("\nLa cantidad de I son: %d",conti);
   printf("\nLa cantidad de O son: %d",conto);
   printf("\nLa cantidad de U son: %d",contu);
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
