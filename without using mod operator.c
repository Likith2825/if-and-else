#include <stdio.h>
main()
{
	int a,b,c,r;
	printf("enter a value for a");
	scanf("%d",&a);
	printf("ener a value for b");
	scanf("%d",&b);
	c=a/b;
	printf("%d",c);
	r=a-(c*b);
	printf("\n%d",r);
}
