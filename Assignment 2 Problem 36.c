/* Assignment 2 Problem 36: Program to print given number pattern
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

/* Output
Enter the number of rows:7
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

--------------------------------
Process exited after 3.759 seconds with return value 0
Press any key to continue . . .
 */