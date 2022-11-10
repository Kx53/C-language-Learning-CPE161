#include<stdio.h>
#include<conio.h>
main()
{
	int a,result1,result2;
	printf("Enter Price :");
	scanf("%d",&a);
	if (a<5000)
	{
		printf("Price %d baht\n", a);
	}	
	else
	{
		result1= a-(a*10/100);
		printf("Price %f baht\n", result1);
	}
	getch();
	return 0;
}
