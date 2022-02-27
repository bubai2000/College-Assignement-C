/* Assignment 2 Problem 31: Program to print half pyramid using '*'
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows you want to display:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

/* Output
Enter the number of rows you want to display:7
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *

--------------------------------
Process exited after 3.093 seconds with return value 0
Press any key to continue . . .
 */