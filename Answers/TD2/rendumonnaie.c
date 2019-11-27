#include <stdio.h>

int main()
{
	int somme;
	scanf("%d",&somme);
	
	int pieces[5] = {50, 20, 10, 5, 1} ;
	int i = 0;
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d\r\n",somme/pieces[i]);
		somme = somme - (somme/pieces[i])*pieces[i] ;
	}
	return 0;
}
