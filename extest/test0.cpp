#include<stdio.h>  
#include<conio.h> 
main()  
{     
	int count,s=0;       
	for (count=1; count<=1000; count++)     
	{       
		if ((count%17==0)||(count%19==0))  
		{
			printf("%d\n",count);       
			s++; 
		}
	}     
printf("Number = %d",s);
getch();     
return 0; 
} 
