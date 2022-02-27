/* Assignment 4 Problem 6: Check whether a number is even or odd.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	int a;
	printf("Enter any number=>");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is even",a);
	else 
		printf("%d is odd",a);

return 0;

}

/* Output
Enter any number=>35
35 is odd
--------------------------------
Process exited after 2.874 seconds with return value 0
Press any key to continue . . .
 */