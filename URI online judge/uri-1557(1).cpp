#include <bits/stdc++.h>
using namespace std;
int obter_num_digitos(int N)
{
	int q_digitos = 0;

	while(N) // enquanto N diferente de 0
	{
		N /= 10;
		q_digitos++;
	}
	return q_digitos;
}

int main()
{
	int N; // ordem da matriz

	while(cin>>N)
	{


		if(N == 0)
			break;

		if(N == 1)
			printf("1\n");
		else
		{
			int maior = pow(4, N - 1);
			int num_digitos = obter_num_digitos(maior);

			// obtém o limite das linhas
			int limite_i = pow(2, N - 1);

			// imprime a matriz
			for(int i = 1; i <= limite_i; i *= 2)
			{
				// obtém o limite das colunas
				int limite_j = i * pow(2, N - 1);
				printf("%*d", num_digitos, i);
				for(int j = i * 2; j <= limite_j; j *= 2)
					printf(" %*d", num_digitos, j);
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}
