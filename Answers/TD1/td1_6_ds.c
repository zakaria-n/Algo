#include <stdio.h>

int main()
{
	int nbValeurs;
	scanf("%d",&nbValeurs);
	int i;
	double sommeNegative = 0.0 ;
	int nbNegatifs = 0 ;
	for(i = 0 ; i < nbValeurs ; i++)
	{
		double val;
		scanf("%lf",&val);
		if(val<=0.0)
		{
			sommeNegative = sommeNegative + val;
			nbNegatifs++;
		}
	}
	
	if(nbNegatifs!=0)
	{
		printf("%lf\r\n", sommeNegative/nbNegatifs);
	}
	else
	{
		printf("-\r\n");
	}
	return 0;
}
