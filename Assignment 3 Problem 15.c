/* Assignment 3 Problem 15: Sum of first and last digit of user given number
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,f,l,r,m=0;
	printf("Enter number=>");
	scanf("%d",&n);
	l=n%10;
	do
	{
		f=n;
		n=n/10;
	}while(n>0);
	printf("Sum of first and last digit= %d",f+l);
	return 0;
}

/* Output
Enter number=>719954
Sum of first and last digit= 11
--------------------------------
Process exited after 4.323 seconds with return value 0
Press any key to continue . . .
 */