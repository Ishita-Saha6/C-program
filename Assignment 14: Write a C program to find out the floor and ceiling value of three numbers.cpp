#include<stdio.h>
#include<math.h>
int main()
{
	double num1=8.34, num2=2.90, num3=5.59;
	printf("number1: %.2lf\n" ,num1);
	printf("floor: %.2lf\n" ,floor(num1));
	printf("ceiling: %.2lf\n\n" ,ceil(num1));
	printf("number2: %.2lf\n" ,num2);
	printf("floor: %.2lf\n" ,floor(num2));
	printf("ceiling: %.2lf\n\n" ,ceil(num2));
	printf("number3: %.2lf\n" ,num3);
	printf("floor: %.2lf\n" ,floor(num3));
	printf("ceiling: %.2lf\n\n" ,ceil(num3));
	return 0;
}
