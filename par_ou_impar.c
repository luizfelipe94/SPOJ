#include <stdio.h>
#include <stdlib.h>
 
 
 
int main(){
	
		int qtePartidas, rodada;
		char jogador1[11];
		char jogador2[11];
		
	scanf("%d", &qtePartidas);
	rodada = 1;
	while(qtePartidas != 0){
			
		scanf("%s", &jogador1);
		scanf("%s", &jogador2);
			
		int numJogador1[qtePartidas];
		int numJogador2[qtePartidas];
			
		int i=0;
			
		for(i=0; i<qtePartidas; i++){
			scanf("%d",&numJogador1[i]);
		    scanf("%d",&numJogador2[i]);
		}
			
		printf("Teste %d\n", rodada);
		rodada++;		
		for(i=0; i<qtePartidas;i++){
			if((numJogador1[i] + numJogador2[i]) % 2 == 0 ) 
				printf("%s\n", jogador1);
			else
				printf("%s\n", jogador2);
		}
		
		scanf("%d", &qtePartidas);
	}	
	return 0;
} 