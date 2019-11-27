#include <stdio.h>

int main()
{
	int nbNombres = 0;
	int vecteur[1000] ;
	int val;
	scanf("%d",&val);
	while(val >= 0)
	{
		vecteur[nbNombres] = val;
		nbNombres++;
		scanf("%d",&val);
	}
	
	int i;
	int palyndrome = 1;
	for(i=0 ; i< nbNombres/2 ; i++)
	{
		if(vecteur[i] != vecteur[nbNombres-i-1])
		{
			palyndrome = 0;

		}
	}
	printf("%d\r\n",palyndrome);
	return 0;
}
