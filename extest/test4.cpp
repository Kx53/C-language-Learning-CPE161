#include<stdio.h>  
#include<conio.h> 
main()  
{     
	int matrix[2][2],i,j,det;     
	for(i=0;i<2;i++)     
	{       
		for(j=0;j<2;j++)       
		{         
		printf("Enter Numbers[%d][%d]:",i,j);         
		scanf("%d",&matrix[i][j]);       
		}
	}     
	det = (matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
	printf("Det A = %d",det);
	getch();     
	return 0; 
}   
