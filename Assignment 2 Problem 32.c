/* Assignment 2 Problem 32: Program to print inverted half pyramid using '*'
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of rows,you want to display=>");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
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
Enter the number of rows,you want to display=>6
* * * * * *
* * * * *
* * * *
* * *
* *
*

--------------------------------
Process exited after 1.594 seconds with return value 0
Press any key to continue . . .
 */