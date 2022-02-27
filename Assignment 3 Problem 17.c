/* Assignment 3 Problem 17: Checking if  a number is perfect
Roll no.: MTUG/118/19*/
#include<stdio.h>    
int main()  
{  
	int num,rem,sum=0,i=1;    
	printf("Enter a number=");  
	scanf("%d",&num);
	do
	{  
    	rem = num % i;  
    	if (rem == 0)  
    	{  
        	sum = sum + i;  
    	}
    	i++;
	}while(i < num);  
	if(sum == num)  
	{
		printf("%d is a Perfect Number",num);  
	}
	else 
	{
		printf("%d is NOT a Perfect Number",num);
	}
	return 0;  
}


/* Output 1
Enter a number=33550336
33550336 is a Perfect Number

Output 2
Enter a number=121
121 is not a Perfect Number
 */