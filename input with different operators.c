#include<stdio.h>
main()
{
	int a,b,c,d,e,g;
	printf("Enter a value a");
	scanf("%d",&a);
	printf("Enter a value for b");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	float f;
	f=(float)c/a;
	g=c%a;
	printf("\n%d \n%d \n%d \n%f \n%d" ,c,d,e,f,g);
}
