/* Assignment 5a Problem 2: C program to find nCr by using array
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main ()
{ 
	int i,b,r,n;
	int a[100];
	a[1]=1;
	printf("Enter the  values of n and r=> \n");
	scanf("%d%d",&n,&r);
	for(i=2;i<=n;i++)
	{
		a[i]=i*a[i-1];
	}
	b=a[n]/(a[r]*a[n-r]);
	printf("The value of %dC%d is %d",n,r,b);
	return 0;
}

/* Output
Enter the  values of n and r=>
7
4
The value of 7C4 is 35
--------------------------------
Process exited after 7.87 seconds with return value 0
Press any key to continue . . .
 */