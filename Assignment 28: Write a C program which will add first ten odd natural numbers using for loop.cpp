#include<stdio.h>
int main()
{
	int sum=0;
	int n;
	for(n=1;n<=19;n+=2)
	{
		sum +=n;
	}
	printf("sum of first 10 odd natural numbers: %d\n",sum);
	return 0;
}
