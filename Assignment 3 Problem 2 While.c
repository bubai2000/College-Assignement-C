/* Assignment 3 Problem 2: Printing factorial of a number
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter number=>");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		f=f*i;
		i--;
	}
	printf("%d!=%d",n,f);
	return 0;
}

/* Output
Enter number=>31
31!=738197504
--------------------------------
Process exited after 4.547 seconds with return value 0
Press any key to continue . . .
 */