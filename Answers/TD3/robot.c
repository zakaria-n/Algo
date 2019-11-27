#include <stdio.h>

int main()
{
	int n;
	int grille[100][100];
	scanf("%d",&n);

	int i;
	int j;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf("%d",&grille[i][j]);
		}
	}
	
	// Le nombre de chemins pour arriver sur une case i/j 
	// est egal au nombre de chemin pour arriver sur i-1/j et i/j-1
	grille[0][0] = 1; 	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ;j++)
		{
			if(grille[i][j] != -1)
			{
				if(i > 0)
				{
					grille[i][j] += (grille[i-1][j] > 0) ? grille[i-1][j] : 0 ;
				}
				if(j > 0)
				{
					grille[i][j] += (grille[i][j-1] > 0) ? grille[i][j-1] : 0;
				}
			}
		}
	}
	
	printf("%d\r\n",grille[n-1][n-1]);
	return 0;
}
