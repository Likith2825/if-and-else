#include<stdio.h>
main()
{
	int a,b,t;
	printf("Enter a value for a");
	scanf("%d",&a);
	printf("Enter a value for b");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("Swapped value a=%d",a);
	printf("\n Swapped value b=%d",b);
}
