#include <stdio.h>

int main()
{
	int qtePartidas = 0;
	scanf("%d", &qtePartidas);
	int partidas[qtePartidas];
	
	int placar=0;
	scanf("%d", &placar);
	
	int i=0;
	for(i = 0; i < qtePartidas; i++)
	{
		scanf("%d", &partidas[i]);
	}

	int x = 0, y = 0, aux = 0;
	for( x = 0; x < qtePartidas; x++ )
	{
		for( y = x + 1; y < qtePartidas; y++ ) // sempre 1 elemento à frente
		{
			// se o (x > (x+1)) então o x passa pra frente (ordem crescente)
			if ( partidas[x] < partidas[y] )
			{
				aux = partidas[x];
				partidas[x] = partidas[y];
				partidas[y] = aux;
			}
		}
	} // fim da ordenação

	for(x = 0; x < placar; x++)
	{
		printf("%d\n", partidas[x]);
	}


	return 0;
}
