#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	printf("Enter a value a");
	scanf("%d",&a);
	printf("Enter a value b");
	scanf("%d",&b);
	printf("Enter a value c");
	scanf("%d",&c);
	printf("Enter a value d");
	scanf("%d",&d);
	e=(a>b)&&(c<d);
	f=(a<b)||(c>d);
	printf("%d %d",e,f);
}
