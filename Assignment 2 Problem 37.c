/* Assignment 2 Problem 37: Printing a given structure 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,c=1;
	printf("Enter number of lines to be printed=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
return 0;
}

/* Output
Enter number of lines to be printed=>5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

--------------------------------
Process exited after 2.089 seconds with return value 0
Press any key to continue . . .
 */
