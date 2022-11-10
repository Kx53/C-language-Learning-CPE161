#include<stdio.h> 
#include<conio.h> 

void movie_program() 
{    
	int i;    
	printf("\n\n********** Movie List *********\n\n");    
	printf("1. Battle Royale\n");    
	printf("2. Shallow Hal\n");    
	printf("3. Captain Corelli's Mandolin\n");    
	printf("4. Vanilla Sky\n"); 
}      

main() 
{    
	char ans;    
	printf("Do you want to check movie program? (y/n):");    
	ans = getchar();    
	if(ans=='y')      
		movie_program();    
	else      
		printf("Thank you\n");    
	getch();    
	return 0; 
} 
