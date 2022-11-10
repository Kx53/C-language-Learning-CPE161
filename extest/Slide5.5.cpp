#include<stdio.h>  
#include<conio.h> 
main()  
{    
	int day;    
	printf("Enter day (1-7):");    
	scanf("%d",&day);    
	switch(day)    
{      
	case 1:printf("%d is Sunday\n",day);break;      
	case 2:printf("%d is Monday\n",day);break;      
	case 3:printf("%d is Tuesday\n",day);break;      
	case 4:printf("%d is Wednesday\n",day);break;      
	case 5:printf("%d is Thursday\n",day);break;      
	case 6:printf("%d is Friday\n",day);break;      
	case 7:printf("%d is Saturday\n",day);break;      
	default:printf("Please Enter only 1-7!!!\n");    
}    
getch();    
return 0; 
} 
