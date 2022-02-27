/* Assignment 2 Problem 24: Printing primes in user defined range
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,i,j,f=0;
	printf("Enter start of range=>");
	scanf("%d",&p);
	printf("Enter end of range=>");
	scanf("%d",&q);
	for(j=p;j<=q;j++)
	{
		for(i=2;i<=sqrt(j);i++)
		{
			if(j%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("%d ",j);
		}
		f=0;
	}
return 0;
}

/* Output
Enter start of range=>27
Enter end of range=>125
29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113
--------------------------------
Process exited after 5.203 seconds with return value 0
Press any key to continue . . .
 */
