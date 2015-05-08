#include "lib.h"

int validar(int c) {
	if((c<-100)||(c>100)){
		return 0;
	}
	return 1;
}
