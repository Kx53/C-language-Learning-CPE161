#include<stdio.h>
#include<conio.h>
main()
{
	int a,result;
	printf("Enter Number :");
	scanf("%d",&a);
	result = a%2;
	if(result == 1)
	{
		printf("--> %d odd Number.\n", a);
	}	
	else
	{
		printf("--> %d even Number.\n", a);
	}
	getch();
	return 0;
}
