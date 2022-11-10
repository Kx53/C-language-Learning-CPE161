#include <stdio.h>
#include <conio.h>
#include <math.h>

float rectangle_area (float x,float y)
{
	float result;
	result = x*y;
	return result;
}

main ()
{
	float area,x,y;
	printf("Enter side1 :");
	scanf("%f", &x);
	printf("Enter side2 :");
	scanf("%f",&y);
	area = rectangle_area(x,y);
	printf("Area = %.2f",area);
	getch();
	return 0;
}
