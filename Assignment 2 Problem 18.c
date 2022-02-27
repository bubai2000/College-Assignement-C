/* Assignment 2 Problem 18: Sum of series 1/2-2/3+3/4+...
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float j,sum=0;
	printf("Enter number of terms=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i;
		sum=sum+(pow(-1,i+1)*(j/(j+1)));
	}
	printf("Result of sum= %f", sum);
	return 0;
}

/* Output
Enter number of terms=>6
Result of sum= -0.240476
--------------------------------
Process exited after 2.379 seconds with return value 0
Press any key to continue . . .
 */
