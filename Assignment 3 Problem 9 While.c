/* Assignment 3 Problem 9: Print the number of the digits of an integer 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,ans=0;
	printf("Enter number=>");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		ans++;
	}
	printf("Number of digits in your given integer is=%d",ans);
	return 0;
}

/* Output
Enter number=>76867567
Number of digits in your given integer is=8
--------------------------------
Process exited after 2.132 seconds with return value 0
Press any key to continue . . .
 */