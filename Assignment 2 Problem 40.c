/* Assignment 2 Problem 40: Printing a given structure
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char c='A';
	printf("Enter number of lines to be printed=>");
	scanf("%d",&n);
	if(n>26)
	{
		printf("There are only 26 alphabets");
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
		}
		printf("\n");
		c++;
	}
	}
return 0;
}

/* Output
Enter number of lines to be printed=>5
A
BB
CCC
DDDD
EEEEE

--------------------------------
Process exited after 1.767 seconds with return value 0
Press any key to continue . . .
 */
