#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a value for a");
	scanf("%d",&a);
	printf("Enter a value for b");
	scanf("%d",&b);
	printf("%d",c=a<b?a:b);
	printf("\n%d",c+a>b?b:a);
}
