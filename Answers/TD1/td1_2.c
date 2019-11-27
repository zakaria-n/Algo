#include <stdio.h>

int main()
{
	int in;
	int fact = 1;
	scanf("%d",&in);
	int i;
	for(i = 1 ;i <= in ; i++)
	{
		fact = fact * i;
	}
	printf("%d\r\n",fact);	
	return 0;
}
