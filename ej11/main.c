#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     int i, resto,cImp=0;
 for(i=0;i<101;i++)
   {
   if(i%2==0)
    {
       printf("\n%d",i);
       cImp=cImp+1   ;
    }
   }
  system("PAUSE");	
  return 0;
}
