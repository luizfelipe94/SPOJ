#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, fat=1, i;
	
	scanf("%d", &n);
	
	if(n >= 0 && n <= 12){
		for(i=0; i<=n; i++){
			fat = fat*i;
		}
	
		printf("%d", fat);
	}
	
}
