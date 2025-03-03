#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		i++;
	}
	printf("%d",i);
	return 0;
}
