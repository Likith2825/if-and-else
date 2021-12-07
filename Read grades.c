#include<stdio.h>
main()
{
	int c;
	char E,V,G,A,F;
	printf("Enter the Grade= ");
	scanf("%c",&c);
	if(c=='E')
	{
		printf("Excellent");
	}
	else if(c=='V')
	{
		printf("Very Good");
	}
	else if(c=='G')
	{
		printf("Good");
	}
	else if(c=='A')
	{
		printf("Average");
	}
	else if(c=='F')
	{
		printf("Fail");
	}
	else 
	{
		printf("Nothing");
	}
}
