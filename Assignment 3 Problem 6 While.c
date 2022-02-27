/* Assignment 3 Problem 6: Finding GCD and LCM of two numbers
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n1,n2,gcd,lcm,i=1;
	printf("Enter 1st number=>");
	scanf("%d",&n1);
	printf("Enter 2nd number=>");
	scanf("%d",&n2);
	while(i<=n1)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
		i++;
	}
	lcm=(n1*n2)/gcd;
	printf("\n GCD of %d and %d = %d",n1,n2,gcd);
	printf("\n LCM of %d and %d = %d",n1,n2,lcm);
	return 0;
}

/* Output
Enter 1st number=>345
Enter 2nd number=>92

 GCD of 345 and 92 = 23
 LCM of 345 and 92 = 1380
--------------------------------
Process exited after 16.98 seconds with return value 0
Press any key to continue . . .
 */