#include<stdio.h>  
#include<conio.h> 
main()  
{     
	int count,n;     
	printf("Enter number?:");     
	scanf("%d",&n);     
	for (count=n; count<=100; count++)     
	{       
		if (count%10==0)         
			printf("%d\n",count);       
		else 
		{         
			continue;         
			printf("Please Enter the number can be divided by ten!!!\n");       
		}     
	}     
getch();     
return 0; 
} 
