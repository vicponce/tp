#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	int num[10]={0},i;
int suma;
char pregunta='s';

	do{
	for(i=0;i<3;i++){
	

			printf("Ingresar Numero>");
			scanf("%d",&suma);
			num[i]=num[i]+suma;
			fflush(stdin);
			printf("Quiere seguir? \n>");
			pregunta=getch();
			fflush(stdin);
		}
		} while(pregunta!='n');
		
	for(i=0;i<10;i++){
		printf("Elemento %d     cantidad total %d\n",i,num[i]);
	}
  
  system("PAUSE");	
  return 0;
}
