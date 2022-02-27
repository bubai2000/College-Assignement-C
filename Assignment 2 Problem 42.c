/* Assignment 2 Problem 42: Printing a given structure 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char c='A';
	printf("Enter number of lines to be printed=>");
	scanf("%d",&n);
	c+=(n-1);
	if(n>26)
	{
		printf("There are only 26 alphabets");
	}
	else
	{
		for(i=n;i>=1;i--)
		{
			for(j=i;j>=1;j--)
			{
				printf("%c",c);
			}
			printf("\n");
			c--;
		}
	}
	return 0;
}

/* Output
Enter number of lines to be printed=>5
EEEEE
DDDD
CCC
BB
A

--------------------------------
Process exited after 0.7078 seconds with return value 0
Press any key to continue . . .
 */
