#include<stdio.h>
int sum_of_squares (int n)
{
	int sum=0;
	for(int i=1;i<=n; i++)
	{
		sum+= i*i;
	}
	return sum;
}
int main()
{
	int n;
    printf("enter the number of terms: ");
    scanf("%d" ,&n);
    printf("sum of squares of %d natural numbers: %d\n",n,sum_of_squares(n));
    return 0;
}
