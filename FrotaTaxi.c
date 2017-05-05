#include <stdio.h>

int main(void){
	
	float A, G, Ra, Rg;
	
	scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
	
	if(A == G || A/Ra > G/Rg){
		printf("G");
	}else{
		printf("A");
	}
}
