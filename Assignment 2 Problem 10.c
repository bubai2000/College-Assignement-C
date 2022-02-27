/* Assignent 2 Problem 10: Sum of series  1+2+3+...n
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter no of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Result of sum=%d",sum);
	return 0;
}

/* Output
Enter no of terms=>9
Result of sum=45
--------------------------------
Process exited after 2.774 seconds with return value 0
Press any key to continue . . .
 */
