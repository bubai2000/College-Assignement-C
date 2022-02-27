/* Assignent 2 Problem 11: Printing sum of series 1^2+2^2+...+n^2
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*i);
	}
	printf("Result of sum=>%d",sum);
	return 0;
}

/* Output
Enter number of terms=>11
Result of sum=>506
--------------------------------
Process exited after 15.59 seconds with return value 0
Press any key to continue . . .
 */
