#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(void){
	int n, result;
	
	scanf("%d", &n);
	
	if(n <= 10000){
		result = n*n;
		printf("%d", result);
	}
}
