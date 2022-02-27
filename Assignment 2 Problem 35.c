/* Assignment 2 Problem 35: Program to print given number pattern
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
Enter the number of rows:6
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

--------------------------------
Process exited after 3.187 seconds with return value 0
Press any key to continue . . .
 */