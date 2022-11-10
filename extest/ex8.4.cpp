#include<stdio.h>
#include<conio.h>
double power(double x,int y);

double power(double x,int y)
{
	int i;
	double result = 1;
	for (i=1;i<=y;i++)
		result *= x;
	return result;
}

main ()
{
	double x;
	int y;
	printf("Enter base number :");
	scanf("%lf", &x);
	printf("Enter power number :");
	scanf("%d",&y);
	if((x>0)&&(y>=0))
		printf("%lf",power (x,y));
	else
		printf("Base or power is not more than zero");
	getch();
	return 0;
}
