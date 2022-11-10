#include<stdio.h>  
#include<conio.h> 
 
void movie_time(int item)  
{    
	switch(item)    
	{      
		case 1:         
			printf("1. Battle Royale\n");         
			printf("11:05 14:00 17:00\n");         
			break;      
		case 2:         
			printf("2. Shallow Hal\n");         
			printf("12:05 15:00 19:00\n");         
			break;      
		case 3:         
			printf("3. Captain Corelli's Mandolin\n");         
			printf("13:05 16:00 20:00\n");         
			break;      
		case 4:         
			printf("4. Vanilla Sky\n");         
			printf("14:05 17:00 21:00\n");         
			break;    
	}    
	printf("********* Enjoy the movie************");  
}  
	 
main()  
{     
	int item;     
	printf("Enter movie program (1-4):");     
	scanf("%d",&item);     
	movie_time(item);     
	getch();     
	return 0; 
}
