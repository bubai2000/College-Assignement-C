/* Assignment 3 Problem 16: Printing prouct of digits of number given by user 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,m,prod=1;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		prod*=m;
		n=n/10;
	}
	printf("Product of the digits is=%d",prod);
	return 0;
}
/* Output
Enter the number=7297
Product of the digits is=882
--------------------------------
Process exited after 9.038 seconds with return value 0
Press any key to continue . . .
 */