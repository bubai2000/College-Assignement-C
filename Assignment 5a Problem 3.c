/* Assignment 5a Problem 3: Printing Fibonacci Series using array
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,n;
	int a[50];
	printf ("Enter the terms you want to know:\n");
	scanf("%d",&n);
	a[0]=0,a[1]=1;
	printf("The first %d terms of Fibonacci sequence are=>\n",n);
	for(i=0;i<n;i++)
	{
		if(i>=2)
		{
			a[i]=a[i-1]+a[i-2];
		}
		printf("\n %d",a[i]);
	}
	return 0;
}

/* Output
Enter the terms you want to know:
10
The first 10 terms of Fibonacci sequence are=>

 0
 1
 1
 2
 3
 5
 8
 13
 21
 34
--------------------------------
Process exited after 1.937 seconds with return value 0
Press any key to continue . . .
 */