#include<stdio.h>
int main()
{
	int i,j,space,num=1;
	for(i=1;i<=4;i++)
	{
		for(space=1;space<=4-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}

