#include<stdio.h>
int main()
{
	char toss;
	printf("enter the coin result.(H for HEADS, T for TAILS):");
	scanf("%c",&toss);
	if(toss=='H'||toss=='h')
	{
		printf("HEADS");
	}
	else if(toss=='T'||toss=='t')
	{
		printf("TAILS");
	}
	else
	{
		printf("Invalid input.Enter'H'or'T'.");
	}
	return 0;
}
