#include<stdio.h>
main()
{
	int a=10,c,b;
	c=a++;
	printf("%d",c);
	b=++a;
	printf("\n%d \n%d \n%d",a,c,b);
	int d=10,e,f;
	e=d--;
	f=--e;
	printf("\n%d \n%d \n%d",d,e,f);
}

