/* Assignment 4 Problem 20: Compute the sum of the series y=x+x^3/3+x^5/5+......+x^15/15 
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,sum=0;
	for(x=0.1;x<=0.9;x+=0.2)
	{
		for(i=1;i<=15;i+=2)
		{
			sum+=pow(x,i)/i;
		}
		printf("\nResult of sum is %.12f when x=%.1f",sum,x);
		sum=0;
		i=1;
	}
}

/* Output

Result of sum is 0.100335344672 when x=0.1
Result of sum is 0.309519559145 when x=0.3
Result of sum is 0.549305677414 when x=0.5
Result of sum is 0.867055296898 when x=0.7
Result of sum is 1.434280037880 when x=0.9
--------------------------------
Process exited after 0.01752 seconds with return value 0
Press any key to continue . . .
 */