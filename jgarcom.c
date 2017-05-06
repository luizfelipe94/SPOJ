#include <stdio.h>

struct bandeja{
	int L, C;
};

int main(){
	
	
	int N=0, qteCoposQuebrados=0;
	
	scanf("%d", &N);
	
	struct bandeja bandeja[N];
	
	int i=0;
	
	
	while(i < N){
		scanf("%d %d", &bandeja[i].L, &bandeja[i].C);
		i++;
	}
	
	for(i=0; i<N; i++){
		if(bandeja[i].L > bandeja[i].C){
			qteCoposQuebrados += bandeja[i].C;
		}
	}
	
	printf("%d\n", qteCoposQuebrados);
	
	return 0;
}
