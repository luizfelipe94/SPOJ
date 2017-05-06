#include <stdio.h>

struct bandeja{
	int lata, copo;
};

int main(){
	
	
	int qteBandejas=0, qteCoposQuebrados=0;
	
	scanf("%d", &qteBandejas);
	
	struct bandeja bandeja[qteBandejas];
	
	int i=0;
	
	
	while(i < qteBandejas){
		scanf("%d %d", &bandeja[i].lata, &bandeja[i].copo);
		i++;
	}
	
	for(i=0; i<=qteBandejas; i++){
		if(bandeja[i].lata > bandeja[i].copo){
			qteCoposQuebrados += bandeja[i].copo;
		}
	}
	
	printf("%d\n", qteCoposQuebrados);
	
	return 0;
}
