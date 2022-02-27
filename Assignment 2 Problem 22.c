/* Assignment 2 Problem 22: Check if given number prime 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,f=0;
	printf("Enter number=>");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d is neither PRIME nor COMPOSITE",n);
	}
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			f=1;
			printf("%d is COMPOSITE",n);
			break;
		}
	}
	if(f==0)
	{
		printf("%d is PRIME",n);
	}
	return 0;
}

/* Output 1
Enter number=>17
17 is PRIME
--------------------------------
Process exited after 2.238 seconds with return value 0
Press any key to continue . . .

Output 2
Enter number=>529
529 is COMPOSITE
--------------------------------
Process exited after 4.431 seconds with return value 0
Press any key to continue . . .
 */
