#include<stdio.h>
int main()
{
	int number,sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(number!=0)
	{
		sum+=number%10;
		number=number/10;
	}
	printf("sum:%d\n",sum);
	return 0;
}
