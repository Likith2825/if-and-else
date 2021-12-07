#include<stdio.h>
main()
{
	int c;
	printf("Enter the temparature= ");
	scanf("%c",&c);
	if(c<0)
	{
		printf("Freezing Weather");
	}
	else if(c<=10)
	{
		printf("Very Cold Weather");
	}
	else if(c<=20)
	{
		printf("Cold Weather");
	}
	else if(c<=30)
	{
		printf("Normal Temparature");
	}
	else if(c<40)
	{
		printf("It's Hot");
	}
	else if(c>=40)
	{
		printf("It's Very hot");
	}
}
