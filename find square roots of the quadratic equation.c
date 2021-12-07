#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,x,y;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	x= (-b+sqrt(d))/(2*a);
	y= (-b-sqrt(d))/(2*a);
	printf("(%d,%d)",x,y);
	if (d>0)
	{
		printf("\nRoots are real");
	}
	else if (d==0)
	{
		printf("\nRoots are equal");
	}
	else if (d<0)
	{
		printf("\nRoots are imaginary");
	}
	else
	{
		printf("nothing");
	}
}

