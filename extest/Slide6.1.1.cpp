#include<stdio.h>  
#include<conio.h> 
main ()
{
	int i;
	float sum = 1/;
	for (i=1;i<=10000;i=i+2)
	{
		sum +=1.0/(i*i);
	}
	printf("1+(1/4.0)+(1/3.0)+...+(1/10000) = %f",sum);
	
	getch();    
	return 0;
}
	
