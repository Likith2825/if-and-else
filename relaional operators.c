#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter a value a");
	scanf("%d",&a);
	printf("Enter a value b");
	scanf("%d",&b);
	printf("Enter a value c");
	scanf("%d",&c);
	printf("Enter a value d");
	scanf("%d",&d);
	printf("%d %d",a>b,a<b);
	printf("%d %d %d %d",c==d,c>=d,c<=d,c!=d);
}
