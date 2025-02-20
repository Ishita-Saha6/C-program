#include<stdio.h>
int main()
{
	char c;
	int vowel;
	printf("enter an alphabet: ");
	scanf("%c",&c);
	vowel= (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	if(vowel)
	{
		printf("it is a vowel.");
	}
	else
	{
		printf("it is a consonant.");
	}
	return 0;
}
