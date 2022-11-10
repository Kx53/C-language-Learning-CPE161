#include<stdio.h>
#include<conio.h>
main()
{
	float r,result;
	printf("Please input radius : ");
	scanf("%f", &r);
	result=(4/3.0)*3.141*r*r*r;
	printf("Your Sphere is : %f", result);
	getch();
	return 0;
}
