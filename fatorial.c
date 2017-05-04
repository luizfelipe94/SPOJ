#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, fat=1, i;
	
	scanf("%d", &n);

	if(n >= 0 && n <= 12){	
		while(i <= n){
			fat = fat*i;
			i++;
		}
		printf("%d", fat);
	}	
}
