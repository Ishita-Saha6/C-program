#include<stdio.h>
int main()
{
	double num;
	printf("enter a number: ");
	scanf("%lf" ,&num);
	if(num<0)
	printf("negative number.");
	else if(num>0)
	printf("positive number.");
	else
	printf("entered 0.");
	return 0;
}
