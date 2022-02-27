/* Assignment 3 Problem 29: Program to find the values of e^x
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float x,e=1,f;
	printf("Enter the number of terms=>");
	scanf("%d",&n);
	printf("Enter the value of x=>");
	scanf("%f",&x);
	for(i=1;i<n;i++)
	{	
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		e+=pow(x,i)/f;
	}
	printf("e^%f=%f",x,e);
	return 0;
}

/* Output
Enter the number of terms=>30
Enter the value of x=>3.5
e^3.500000=33.115448
--------------------------------
Process exited after 8.225 seconds with return value 0
Press any key to continue . . .
 */