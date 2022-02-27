/*Assignment 4 Problem 5: Check whether a number is divisible by 5 and 11 or not.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int a;
	printf ("Enter any number=>");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
		printf("%d is divisible by 5 and 11",a);
	else 
		printf ("%d in not divisible by 5 and 11",a);
	return 0;
	 
}

/* Output
Enter any number=>1320
1320 is divisible by 5 and 11
--------------------------------
Process exited after 2.287 seconds with return value 0
Press any key to continue . . .
 */