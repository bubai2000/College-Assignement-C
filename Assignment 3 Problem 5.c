/* Assignment 3 Problem 5: Priting Fibonnaci series
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i=1;
	printf("Enter the number of terms=>");
	scanf("%d",&n);
	do
	{
		c=a+b;
		printf("\n Term %d=> %d",i,c);
		a=b;
		b=c;
		i++;
	}while(i<n);
return 0;
}

/* Output
Enter the number of terms=>10

 Term 1=> 1
 Term 2=> 2
 Term 3=> 3
 Term 4=> 5
 Term 5=> 8
 Term 6=> 13
 Term 7=> 21
 Term 8=> 34
 Term 9=> 55
--------------------------------
Process exited after 1.938 seconds with return value 0
Press any key to continue . . .
 */