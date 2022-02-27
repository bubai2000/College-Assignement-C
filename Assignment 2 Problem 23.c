/* Assignment 2 Problem 23: Printing prime on 1 to 100
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,f=0;
	for(j=1;j<=100;j++)
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
1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
--------------------------------
Process exited after 0.02325 seconds with return value 0
Press any key to continue . . .
 */
