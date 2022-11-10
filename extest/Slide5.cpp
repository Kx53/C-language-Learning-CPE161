#include<stdio.h>
#include<conio.h>
main()
{
	int a,result1,result2;
	printf("Donut amout :");
	scanf("%d",&a);
	if (a<8)
	{
		result1= a*25;
		printf("Donuts are %d baht\n", result1);
	}	
	if (a>=8)
	{
		result2= a*20;
		printf("Donuts are %d baht\n", result2);
	}
	getch();
	return 0;
}
