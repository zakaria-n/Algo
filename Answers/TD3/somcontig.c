#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int valeurs[5000];
	int sommesMax[5000]; //la case [m] indique la somme max déja atteinte en cette position 
	int i;
	int sommeMax ;

	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&valeurs[i]);
		if (i == 0)
		{
			sommesMax[i] = valeurs[i];
			sommeMax = sommesMax[i];
		}
		else
		{
			sommesMax[i] = sommesMax[i-1] + valeurs[i];
			if(sommesMax[i] > sommeMax)
			{
				sommeMax = sommesMax[i];
			}
		}
	}

	for(i = 1 ; i < n ; i++)
	{
		if(valeurs[i]>sommesMax[i])
		{
			sommesMax[i] = valeurs[i];
			int j;
			for(j = i+1 ; j < n ; j++)
			{
				sommesMax[j] = sommesMax[j-1] + valeurs[j];
				if(sommesMax[j] > sommeMax)
				{
					sommeMax = sommesMax[j];
				}
			} 
		}	
	}
	printf("%d\r\n",sommeMax);
	
	return 0;
}
