#include<stdio.h>  
#include<conio.h> 
 main()  
 {    
	int A;    
	printf("Enter point:");    
	scanf("%d",&A);    
 	if((A<=100)&&(A>=80))       
 		printf("%d point = A\n",A);    
 	else if((A<79)&&(A>=70))       
 		printf("%d point = B\n",A);    
 	else if((A<69)&&(A>=60))   
 	printf("%d point = C\n",A); 
	else if((A<59)&&(A>=50))   
 	printf("%d point = D\n",A); 
	else 
 	printf("%d point = F\n",A);    
 	getch();    
 	return 0;
} 
