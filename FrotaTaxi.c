#include <stdio.h>

int main(void){
	
	float A, G, Ra, Rg;
	
	scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
	
	if((Ra/A) > (Rg/G)){
		printf("A");
	}else{
		printf("G");
	}
}
