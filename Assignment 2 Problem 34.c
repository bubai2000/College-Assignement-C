/* Assignment 2 Problem 34: Program to print a half pyramid using '*' 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{	
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
    	}
		for(int k=1;k<=i;k++)
		{
			printf("* ");
    	}
    	printf("\n");
	}
	return 0;
}
/* Output
Enter the number of rows:6

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

--------------------------------
Process exited after 4.629 seconds with return value 0
Press any key to continue . . .
 */