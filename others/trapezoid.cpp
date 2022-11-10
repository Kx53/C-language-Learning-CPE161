#include<stdio.h>
#include<conio.h>
main()
{
    float b1,b2,h,a;
    printf("Base1 = ");
    scanf("%f", &b1);
    printf("Base2 = ");
    scanf("%f", &b2);
    printf("Height = ");
    scanf("%f", &h);
    a = (b1+ b2)/2*h;
    printf("Area of Trapezoid : %f ",a);
    getch();
    return(0);
}
