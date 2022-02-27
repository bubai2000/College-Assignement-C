/* Assignment 3 Problem 8: Printing revers of an integer
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,m,num=0;
	printf("Enter number=>");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		num=(num*10)+m;
		n=n/10;
	}
	printf("The reversed number = %d",num);
	return 0;
}

/* Output
Enter number=>2441139
The reversed number = 9311442
--------------------------------
Process exited after 9.851 seconds with return value 0
Press any key to continue . . .
 */