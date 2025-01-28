#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer: ");
	scanf("%d" ,&num);
	int last_digit=num-(num/10)*10;
	printf("the last digit of %d is %d\n" ,num,last_digit);
	return 0;
}
