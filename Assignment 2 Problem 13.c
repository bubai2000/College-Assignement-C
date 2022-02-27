/* Assignent 2 Problem 13: Sum of series 1+1/3^2+1/5^2+...+1/n^2
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n;
	float j,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		j=i;
		sum+=(1/(j*j));
	}
	printf("Result of sum=%f",sum);
	return 0;
}

/* Output
 Enter number of terms=>9
Result of sum=1.183865
--------------------------------
Process exited after 2.007 seconds with return value 0
Press any key to continue . . .
 */
