#include <stdio.h>

int main()
{
	int capacite;
	scanf("%d",&capacite);
	int tablePoids[101][10000]; //si table[i][n] = 1, alors le sac de capacite n est remplissable avec les i premiers poids entrées
	int i;

	for(i = 0 ; i < 101 ; i++)
	{
		tablePoids[i][0] = 1;
	}

	int poids = 0;
	int estRemplissable = 0;
	int ligne = 1;
	while(1)
	{
		scanf("%d",&poids);
		if(poids < 0)
		{
			break;
		}
		
		for(i= poids; i <= capacite ; i++)
		{
			if(tablePoids[ligne-1][i] == 1 || tablePoids[ligne-1][i-poids] == 1)
			{
				tablePoids[ligne][i] = 1;
			}
		}
		if(tablePoids[ligne][capacite])
		{
			estRemplissable = 1;
		}
		ligne++;
	}

	if(estRemplissable)
	{
		printf("OUI\r\n");
	}
	else
	{
		printf("NON\r\n");
	}
	return 0;
}
