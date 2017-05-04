#include <stdio.h>
#include <stdlib.h>


int main(void){
	int n, result;
	
	scanf("%d", &n);
	
	if(n <= 10000){
		result = n*n;
		printf("%d", result);
	}
}
