#include <stdio.h>
#include <conio.h>
main()
{
	float radius, area;
	printf("Radius =");
	scanf("%f", &radius);
	area = 3.14159 * radius * radius;
	printf("Area = %f", area);
	getch();
	return 0;
}
