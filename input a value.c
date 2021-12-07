#include<stdio.h>
main()
{
    int a,b,c,d,e,f;
    printf("Enter a value a");
	scanf("%d",&a);
	printf("Enter a value for b");
	scanf("%d",&b);
	c=a+b;
	d=a*b;
	e=c%a;
	f=(float)c/a;
	printf("%d %d %d %d",c,d,e,f);
}
