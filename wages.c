#include<stdio.h>
main()
{
	float weeklyhours, hourlyrate,earnings;
	printf("Enter the weekly hours: ");
	scanf("%f",&weeklyhours);
	printf("Enter the hourly rate: ");
	scanf("%f",&hourlyrate);
	if(weeklyhours<=40)
	{
		earnings=(hourlyrate*weeklyhours);
	}
	else
	{
		earnings=(40*hourlyrate)+(weeklyhours-40)*(hourlyrate*1.5);
	}
	printf("%f",earnings);
}
