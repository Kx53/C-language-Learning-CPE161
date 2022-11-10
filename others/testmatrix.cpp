#include<stdio.h>  
#include<conio.h> 
main()
{
	int A[3][3]; 
	int B[3][3];
	int C[3][3];
	int i,j;   
	for(i=0;i<3;i++)     
	{       
	  for(j=0;j<3;j++)       
	  {          
		printf("Enter Numbers[%d][%d]:",i,j);         
		scanf("%d",&A[i][j]);                    
	  } 
	}
	printf("\n"); 
	for(i=0;i<3;i++)       
	{
	  for(j=0;j<3;j++)
	  {
	  	printf("Enter Numbers[%d][%d]:",i,j);         
		scanf("%d",&B[i][j]);      
	  }
	}
	printf("\n******Matrix******\n");
	  for(i=0;i<3;i++)
	  	for(j=0;j<3;j++)
	  		C[i][j] = A[i][j]+B[i][j];
	
	for(i=0;i<3;i++)       
	  {          
	   for(j=0;j<3;j++)
	   {
	   	printf("%d ",C[i][j]);
	   }  
	    printf("\n");            
	  }
	getch();     
	return 0;
}
