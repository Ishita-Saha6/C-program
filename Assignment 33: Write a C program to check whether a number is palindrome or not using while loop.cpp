#include<stdio.h>
int main()
{
	int num,reversedNum=0,originalNum;
	printf("input a number:");
	scanf("%d",&num);
	originalNum=num;
	while(num!=0)
	{
		int remainder=num%10;
		reversedNum=reversedNum*10+remainder;
		num/=10;
	}
	if(originalNum==reversedNum)
	{
		printf("%d is a palindrome.\n",originalNum);
	}
	else
	{
		printf("%d is not a palindrome.\n",originalNum);
	}
	return 0;
}
