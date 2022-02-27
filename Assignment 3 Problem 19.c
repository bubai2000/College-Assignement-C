/* Assignment 3 Problem 19: Decimal to Binary 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,b=0,r,p=0;
	printf("Enter the decimal number=");
	scanf("%d",&n);
	do
	{
		r=n%2;
		b+=r*pow(10,p);
		p++;
		n=n/2;
	}while(n!=0);
	printf("Binary form of the given Decimal number is=%d",b);
	return 0;
}

/* Output
Enter the decimal number=346
Binary form of the given Decimal number is=101011010
--------------------------------
Process exited after 4.025 seconds with return value 0
Press any key to continue . . .
 */