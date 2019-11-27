#include <stdio.h>

void quantitePossible(int fioles[21], int cap, int quantitesPos[2501]) //Algorithme du sac à dos 2
{
	int table[21][2501] ;
	int i;
	int y;
	for(i = 0 ; i <21 ; i++)
	{
		for(y = 0 ; y < 2501 ; y++)
		{
			table[i][y] = 0;
		}
	}
	
	table[0][0] = 1 ;
	i = 0;
	int ligne = 0; 
	while(fioles[i] >= 0)
	{	
		int j;
		ligne++;
		for(j = 0 ; j <= cap ; j++)
		{
			
			if(table[ligne-1][j] == 1) 
			{ 
				table[ligne][j] = 1;
			}
			
			if(j-fioles[i] >=  0)
			{
				if( table[ligne-1][j-fioles[i]]==1 )
				{
					table[ligne][j] = 1;
				}
			}

		}
		i++;
	}
	
	int nqPos = 0; //nombre de quantites possibles
	for(i=0; i<=cap ;i++)
	{
		if(table[ligne][i] == 1)
		{
			quantitesPos[nqPos] = i;
			nqPos++;
		}
	}
	quantitesPos[nqPos] = -1;
}

int main()
{
	int capacite;
	scanf("%d",&capacite);
	int nbFioles;
	scanf("%d",&nbFioles);
	
	int ftype1[21]; //les fioles de type 1, s'arrete à -1
	int i1 = 0;
	ftype1[i1] = -1;
	int ftype2[21]; //les fioles de type 2, s'arrete à -1
	int i2 = 0;
	ftype2[i2] = -1;
	
	int i;
	//Lecture des fioles
	for(i = 0 ; i < nbFioles ;i++)
	{
		int quantite, type;
		scanf("%d %d", &quantite, &type);
		if(type == 1)
		{
			ftype1[i1] = quantite;
			i1++;
			ftype1[i1] = -1;
		}
		else
		{
			ftype2[i2] = quantite;
			i2++;
			ftype2[i2] = -1;
		}
	}
	
	//Calcul des quantités possibles pour chaque type de fioles
	int qPos1[2501];  //car capacite = 2500 max; se termine par -1;
	quantitePossible(ftype1, capacite, qPos1);
	int qPos2[2501];
	quantitePossible(ftype2,capacite, qPos2);
	
	int qp1 = 0;
	int qp2 = 0;
	int rougeMax = 0;
	while(qPos1[qp1] >= 0)
	{
		while( qPos2[qp2] >= 0)
		{
			int rouge = (qPos2[qp2] > qPos1[qp1]) ? 2*qPos1[qp1] : 2*qPos2[qp2] ;
			if(rouge > rougeMax && rouge <=capacite && (qPos1[qp1]+qPos2[qp2] <= capacite) )
			{
				rougeMax = rouge;
				
			}	
			qp2++;
		}
		if(rougeMax == capacite)
		{
			break;
		}
		qp1++;
		qp2 = 0;
	}
	
	printf("%d\r\n",rougeMax);
	
	
	return 0;
}

