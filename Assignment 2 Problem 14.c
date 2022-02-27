/* Assignent 2 Problem 14: Sum of the series 1*2+2*3+...+n*(n+1)
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*(i+1));
	}
	printf("Reusult of sum=%d",sum);
	return 0;
}

/* Output
Enter number of terms=>7
Reusult of sum=168
--------------------------------
Process exited after 7.257 seconds with return value 0
Press any key to continue . . .
 */
