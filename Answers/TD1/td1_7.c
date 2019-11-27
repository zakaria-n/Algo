#include <stdio.h>

int main()
{
	int nbIntDep;
	int nbIntFin;
	scanf("%d",&nbIntDep);
	int intDep[nbIntDep*2];
	
	int i;
	for(i = 0 ; i < nbIntDep*2 ; i++)
	{
		scanf("%d",&intDep[i]);
	}
	
	int idep = 0;
	int ifin = 0;
	nbIntFin = nbIntDep;
	int intFin[nbIntFin*2];
	while(idep<(nbIntDep*2))
	{	
		if(ifin == 0)
		{
			intFin[ifin] = intDep[idep] ;
			ifin++;
			idep = idep + 2;
			continue;
		}
		else
		{
			if(intDep[idep-1] >= intDep[idep])
			{
				nbIntFin = nbIntFin -1 ;
				idep = idep + 2;
			}
			else
			{
				intFin[ifin] = intDep[idep-1] ;
				ifin++;
				intFin[ifin] = intDep[idep];
				ifin++;
				idep = idep + 2;
			}
		}
		
	}
	
	intFin[ifin] = intDep[nbIntDep*2-1];
	printf("%d\r\n",nbIntFin);
	for(i = 0 ; i < nbIntFin ; i++)
	{
		printf("%d %d\r\n",intFin[2*i], intFin[2*i + 1]);
	}
	return 0;
}
