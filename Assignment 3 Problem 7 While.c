/* Assignment 3 Problem 7: Printing sum of digits of a number
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter the number=>");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum+=m;
		n=n/10;
	}
	printf("Sum of digits =%d",sum);
	return 0;
}

/* Output
Enter the number=>8734868
Sum of digits =44
--------------------------------
Process exited after 2.905 seconds with return value 0
Press any key to continue . . .
 */