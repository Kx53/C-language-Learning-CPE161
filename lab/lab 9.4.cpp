#include<stdio.h>  
#include<conio.h> 
main()  
{     
	int matrix[3][3]= {{11,12,13},{21,22,23},{31,32,33}};     
	int row,col;     
	int sum_row;     
	for(row=0;row<=2;row++)     
	{ sum_row=0;       
	  for(col=0;col<=2;col++)       
	  {          
	  printf("%d ",matrix[row][col]);          
	  sum_row+=matrix[row][col];       
	  }       
	printf("\t Sum of Row = %d\n",sum_row);     
	}     
	getch();     
	return 0; 
}  
