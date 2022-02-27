/* Assignment 2 Problem 5: Factorial of a number
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int i,n,f=1;
		printf("Enter number=>");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		printf("\n%d!=%d",n,f);
		return 0;
}

/* Output
Enter number=>5

5!=120
[Program finished]
 */