#include<stdio.h>  
#include<conio.h> 
main()  
{    
	int day;    
	printf("Enter day (1-7):");    
	scanf("%d",&day);    
	if(day==1)    
    printf("%d is Sunday\n",day);
	else if(day==2)   
	printf("%d is Monday\n",day);
	else if(day==3)      
	printf("%d is Tuesday\n",day);
	else if(day==4)       
	printf("%d is Wednesday\n",day);
	else if(day==5)       
	printf("%d is Thursday\n",day);
	else if(day==6)    
	printf("%d is Friday\n",day);
	else if(day==7)      
	printf("%d is Saturday\n",day); 
	else
	printf("Please Enter only 1-7!!!\n");  
getch();    
return 0; 
} 
