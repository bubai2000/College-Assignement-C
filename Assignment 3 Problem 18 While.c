/* Assignment 3 Problem 18: Binary to decimal conversion
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,r,s=0,i=0;
	printf("Enter the binary number=");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		p=pow(2,i);
		s=s+(p*r);
		n=n/10;
		i++;
	}
	printf("Decimal form of the given number is=%d",s);
	return 0;
}
/* Output
Enter the binary number=1011001110
Decimal form of the given number is=718
--------------------------------
Process exited after 12.29 seconds with return value 0
Press any key to continue . . .
 */