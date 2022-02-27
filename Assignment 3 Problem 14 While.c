/* Assignment 3 Problem 14: Find first and last digit of number given by user
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,f,l,r,m=0;
	printf("Enter number=>");
	scanf("%d",&n);
	l=n%10;
	while(n>0)
	{
		f=n;
		n=n/10;
	}
	printf("First digit is=%d\n",f);
	printf("Last digit is=%d",l);
	return 0;
}


/* Output
Enter number=>9384413
First digit is=9
Last digit is=3
--------------------------------
Process exited after 5.014 seconds with return value 0
Press any key to continue . . .
 */