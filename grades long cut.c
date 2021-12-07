#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if (a>90)
	{
	}
	else
	{
		if (a>80)
		{
			printf("B");
		}
		else
		{
			if (a>70)
			{
				printf("C");
			}
			else
			{
				if (a>60)
				{
					printf("D");
				}
				else
				{
					printf("E");
				}
			}
		}
	}
}
