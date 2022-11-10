#include<stdio.h>  
#include<conio.h> 
main()  
{     
	char input[20];     
	char title[20]={"What is your name?"};     
	printf("%s","********String to Array********\n\n");     
	printf("%s",title);     scanf("%s",input);     
	printf("\nYour name is %s.\n",input);     
	getch();     
	return 0; 
}
