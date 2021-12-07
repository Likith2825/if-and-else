#include<stdio.h>
main()
{
	int a,b,c,d,e,T;
	float P;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	T=a+b+c+d+e;
	P=(float)(T*100)/500;
	printf("%d\n%f",T,P);
	if (P>90)
	{
		printf("\nGrade A");
	}	
	else if (P>80)
	{
		printf("\nGrade B");
	}
	else if(P>70)
	{
		printf("\nGrade C");
	}
	else if (P>40)
	{
		printf("\nGrade D");
	}
	else if (P<40)
	{
		printf("\nGrade E");
	}
	else
	{
		printf("\nFailed");
	}
	
}
