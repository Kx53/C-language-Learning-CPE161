#include<stdio.h>  
#include<conio.h> 
main()  
{    
	int i,count,number;    
	float sum,average;    
	printf("Enter the last value?");    
	scanf("%d",&count);    
	for (i=1;i<=count;i++)    
	{ printf("number %d : ",i);
		scanf("%d",&number);     
		sum+=number;    
	}    
	printf("\nThe summation of value is %f\n",sum);    
	average = sum/i;    
	printf("\nThe average value is %f\n",average);    
	getch();    
	return 0; 
}   
