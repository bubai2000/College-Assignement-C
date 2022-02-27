/* Assignment 5a Problem 1: To find the k! using array 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main ()
{ 
	int i,k;
	int a[10];
	a[1]=1;
	printf("Enter any value of k=>");
	scanf("%d",&k);
	for(i=2;i<=k;i++)
	{	
		a[i]=i*a[i-1];
	}
	printf("The value of %d! = %d",k,a[k]);
	return 0;
}

/* Output
Enter any value of k=>9
The value of 9! = 362880
--------------------------------
Process exited after 1.549 seconds with return value 0
Press any key to continue . . .
 */