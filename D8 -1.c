#include<stdio.h>
main()
{
	int a,b,T;
	scanf("%d",&a);
	if (a>=50)
	{
		b=a*50;
		printf("%d",b);
	}
	else if (50<a<=100)
	{
		b=a*75;
		printf("%d",b);
	}
	else if (100<a<=200)
	{
		b=a*120;
		printf("%d",b);
	}
	else if (a>250)
	{
		b=a*150;
		printf("%d",b);
	}
	T=(b*20)/100;
	printf("\n%d",T);
}
