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
	if (a>5000)
	{
		result1= a*10/100;
		result2= a-result1;
		printf("Price %d baht\n", result2);
	}
	getch();
	return 0;
}
