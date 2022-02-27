/* Assignment 2 Problem 20: GCD of 2 numbers
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int a,b,i,gcd=1;
	printf("Enter number 1=>");
	scanf("%d",&a);
	printf("Enter number 2=>");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	printf("GCD of %d and %d = %d",a,b,gcd);
	return 0;
}

/* Output
Enter number 1=>936
Enter number 2=>572
GCD of 936 and 572 = 52
--------------------------------
Process exited after 13.15 seconds with return value 0
Press any key to continue . . .
 */
