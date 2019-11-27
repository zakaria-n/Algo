#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	int res = 0 ;
	for(i =  -sqrt(a) ; i <= sqrt(a) ; i++)
	{
		for(j =  -sqrt(a)  ; j <= sqrt(a) ; j++)
		{
			if((i*i + j*j == a) && (i*i*i + j*j*j==b))
			{
				printf("%d %d\r\n",i,j);
				if(i == j)
				{
					printf("%d %d\r\n",i,j);
				}
				res = 1 ;
			}
		}
	}
	if(res == 0)
		printf("-\r\n");
		
	return 0;
}
