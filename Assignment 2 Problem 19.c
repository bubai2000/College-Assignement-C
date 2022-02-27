/* Assignment 2 Problem 19: Find nCr 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,r,i;
	float fn=1,fr=1,fnr=1,fact=1;
	printf("Enter n=>");
	scanf("%d",&n);
	printf("Enter r=>");
	scanf("%d",&r);
	for(i=1;i<=n;i++)
	{
		fn*=i;
	}
	for(i=1;i<=r;i++)
	{
		fr*=i;
	}
	for(i=1;i<=(n-r);i++)
	{
		fnr*=i;
	}
	fact=fn/(fr*fnr);
	printf("Result of %dC%d = %f",n,r,fact);
	return 0;
}

/* Output
Enter n=>10
Enter r=>4
Result of 10C4 = 210.000000
--------------------------------
Process exited after 2.46 seconds with return value 0
Press any key to continue . . .
 */
