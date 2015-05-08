#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ int a[10];
  int i=0;
  int b=0;
  
  for (i=0; i<10; i++)
  { 
  printf ("Ingrese un numero");
  scanf ("%d", & a[i]);

}

for (b=0; b<=9; b++)

  { printf("%d ", a[b]);
}

  
  system("PAUSE");	
  return 0;
}
