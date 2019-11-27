#include <stdio.h>

int main()
{
	int volume;
	scanf("%d",&volume);
	int s;
	scanf("%d",&s);
	int estTraite[20001]; //estTraite[m] == 1 si m a été traité ou va se faire traité
	int aTraiter[20001]; //aTraite contient les valeurs à traiter, et atteignable, il se termine par -1 quand on a tout traité
	aTraiter[0] = s; 
	aTraiter[1] = -1;
	int nbATraiter = 1 ;
	int i = 0;
	int sMax = s;
	
	while(aTraiter[i] >=0)
	{
		//Comparaison avec sMax
		if(aTraiter[i] > sMax)
		{
			sMax = aTraiter[i] ;
		}
		if(sMax == volume)
		{
			break;
		}

		//----Traitement-----//
		
		//Opération 1
		if (aTraiter[i]*3 <= volume) 
		{
			if( estTraite[3*aTraiter[i]] == 0 )
			{
				aTraiter[nbATraiter] = 3*aTraiter[i];
				nbATraiter++;
				aTraiter[nbATraiter] = -1;
				estTraite[3*aTraiter[i]] = 1 ;
			}
		}
		
		//Opération 2		
		if (aTraiter[i]*2 <= volume) 
		{
			if( estTraite[2*aTraiter[i]] == 0 )
			{
				aTraiter[nbATraiter] = 2*aTraiter[i];
				nbATraiter++;
				aTraiter[nbATraiter] = -1;
				estTraite[2*aTraiter[i]] = 1 ;
			}
		}
		
		//Opération 3
		if( estTraite[aTraiter[i]/5] == 0 )
		{
			aTraiter[nbATraiter] = aTraiter[i]/5;
			nbATraiter++;
			aTraiter[nbATraiter] = -1;
			estTraite[aTraiter[i]/5] = 1 ;
			
		}
		estTraite[aTraiter[i]] = 1 ; 
		i++;	
	}
	
	printf("%d\r\n",sMax);
	return 0;
}






