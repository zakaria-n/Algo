#include <stdio.h>

int main()
{
	int val;
	scanf("%d",&val);
	printf("%d\r\n",val);
	while(val != 1)
	{
		if(val%2 == 0)
		{
			val = val/2 ;
		}
		else
		{
			val = 3*val+1;
		}
		printf("%d\r\n",val);
	}
	return 0;
}
