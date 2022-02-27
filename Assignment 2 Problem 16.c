/* Assignment 2 Problem 16: Sum of series 1+1/1!+1/2!+...1/n! 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=(1/tgamma(i+1));
	}
	printf("Result of sum= %f",sum);
	return 0;
}

/* Output
Enter number of terms=>5
Result of sum= 2.716667
--------------------------------
Process exited after 2.261 seconds with return value 0
Press any key to continue . . .
 */
