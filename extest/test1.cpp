#include<stdio.h>  
#include<conio.h> 
main()  
{     
	long count,s=0,sum=0;       
	for (count=1; count<=1000; count++)     
	{       
		if ((count%17==0)||(count%19==0))  
		{
			printf("%ld\n",count);
			sum +=count;
			s++; 
		}
	}     
printf("\n\ncount = %ld\n",s);
printf("sum = %ld\n",sum);
getch();     
return 0; 
} 
