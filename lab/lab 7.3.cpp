#include<stdio.h>  
#include<conio.h> 
main()  
{ 
	int a,count=0;    
	while (count<10)    
	{      
		printf("Enter number:");      
		scanf("%d",&a);      
		if (a==0)      
		{        
			printf("You enter wrong number!\n");        
			printf("Please Enter right number in next time!!!\n");        
			break;      
		}      
		else      
		{        
			printf("You enter right number\n");      
		}      
		count++;    
}    
getch();    
return 0; 
} 
