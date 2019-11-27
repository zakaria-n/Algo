#include <stdio.h>

int main()
{
	int capacite;
	scanf("%d",&capacite);
	int sac[capacite + 1];
	sac[capacite] = 0;
	int i;
	for (i = 1 ; i < capacite ; i++)
	{
		sac[i] = 0 ;
	}	
	sac[0] = 1;
	int poids = 0;
	int estRemplissable = 0;
	while (1)
	{
		scanf("%d",&poids);
		if(poids<0)
		{
			break;
		}
		for(i = poids ; i <= capacite ; i++)
		{
			if(sac[i-poids]==1)
			{
				sac[i] = 1;
			}
		}
		if(sac[capacite]==1)
		{
			estRemplissable = 1;	
		}
	}
	
	if(estRemplissable==1)
	{
		printf("OUI\r\n");
	}
	else
	{
		printf("NON\r\n");
	}
	return 0;
}
