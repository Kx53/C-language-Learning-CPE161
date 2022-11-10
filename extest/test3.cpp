#include <stdio.h>
#include <conio.h>
#include <math.h>

float Trapezoid_area (float x,float y,float z)
{
	return (x +y)/2*z;
}

main ()
{
	float area,x,y,z;
	printf("Enter base1 :");
	scanf("%f", &x);
	printf("Enter base2 :");
	scanf("%f",&y);
	printf("Enter height :");
	scanf("%f",&z);
	area = Trapezoid_area (x,y,z);
	printf("Area = %.2f",area);
	getch();
	return 0;
}
