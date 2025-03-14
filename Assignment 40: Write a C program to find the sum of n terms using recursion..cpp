#include<stdio.h>
int recursive_sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n + recursive_sum(n-1);
	}
}
int main()
{
	int n;
	printf("enter the number of terms: ");
	scanf("%d" ,&n);
	printf("sum of %d terms: %d\n" ,n,recursive_sum(n));
	return 0;
}
