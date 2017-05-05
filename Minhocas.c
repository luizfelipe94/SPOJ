#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int l, c;
	long  maior=0;
	int x, i;
	
	scanf("%d %d", &l, &c);
	
	
	int terreno[l][c];
	
	for(i = 0; i<l; i++){
		for(x = 0; x<c; x++){
			scanf("%d", &terreno[i][x]);
		}
	}
	
	for(i=0; i<c; i++){
		long total=0;
		for(x=0; x<l; x++){
			total += terreno[x][i];
		}
		if(total > maior){
			maior = total;
		}
		
	}
	
	for(i=0; i<l; i++){
		long total=0;
		for(x=0; x<c; x++){
			total += terreno[i][x];
		}
		if(total > maior){
			maior = total;
		}
		
	}
	
	printf("%d", maior);
	
	return 0;
	
}
