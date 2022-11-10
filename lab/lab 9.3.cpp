#include<stdio.h>  
#include<conio.h> 
main()  
{     
	float num[10],total;     
	int i=0;     
	while(i<10)     
	{ printf("Enter number:");       
		scanf("%f",&num[i]);      
		i++;     
	}     
	for(i=0;i<10;i++)     
	{       
	total+=num[i];     
	}     
	printf("\n\n******Result******\n\n");     
	printf("total = %f \n",total);     
	printf("Average = %f \n",total/10);     
	getch();     
	return 0; 
} 
