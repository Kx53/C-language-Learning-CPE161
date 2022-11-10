#include<stdio.h>  
#include<conio.h> 
main()  
{     
	int matrix[3][3],i,j;     
	for(i=0;i<3;i++)     
	{       
		for(j=0;j<3;j++)       
		{         
		printf("Enter Numbers[%d][%d]:",i,j);         
		scanf("%d",&matrix[i][j]);       
		}
	}     
	printf("\n******Matrix******\n");     
	for(i=0;i<3;i++)     
	{       
		for(j=0;j<3;j++)       
		{         
		printf("%d ",matrix[i][j]);       
		}      
		printf("\n");     
	}     
	getch();     
	return 0; 
} 
