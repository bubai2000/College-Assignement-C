/* Assignment 3 Problem 12: Printing all the primes between 1 and 100
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i=2,j,k;
	printf("The primes in between 1 and 100 are:");
	while(i<=100)
	{
		k=0;
		j=2;
		while(j<=i/2)
		{
			if(i%j==0)
			{
				k=1;
				break;	
			}
		j++;
		}
		if(k==0)
		{
			printf("\n %d",i);
		}
		i++;
	}
	return 0;
}

/* Output
 The primes in between 1 and 100 are:
 3
 5
 7
 11
 13
 17
 19
 23
 29
 31
 37
 41
 43
 47
 53
 59
 61
 67
 71
 73
 79
 83
 89
 97
--------------------------------
Process exited after 0.01393 seconds with return value 0
Press any key to continue . . .
 */