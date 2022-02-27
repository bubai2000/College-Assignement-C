/* Assignent 2 Problem 12: Find sum of the series 1^3+2^3+...+n^3
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*i*i);
	}
	printf("Result of sum=>%d",sum);
	return 0;
}

/* Output
Enter number of terms=>8
Result of sum=>1296
--------------------------------
Process exited after 2.989 seconds with return value 0
Press any key to continue . . .
 */
