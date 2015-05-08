#include "lib.h"

int validaS_N(void){
	int x=1;
	char letra;
	while(x==1){
		printf("Quiere Seguir?\n");
		scanf("%c",&letra);

		if((toupper(letra )=='S')||(toupper(letra)=='N'))
			{ if(letra=='s'){
				return 1;
			}else{
				return 0;
			}
		}
	}
}
