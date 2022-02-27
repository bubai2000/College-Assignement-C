/* Assignment 2 Problem 15: Find sum of series  1+(1+2)+(1+2+3)+...+(1+2+...+n)
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
	}
	printf("Result of sum= %d",sum);
	return 0;
}

/* Output
Enter number of terms=>5
Result of sum= 35
--------------------------------
Process exited after 2.488 seconds with return value 0
Press any key to continue . . .
 */
