/* Assignment 4 Problem 4: Check whether a number is negetive ,positive or zero.
Roll no.: MTUG/118/19
*/
#include<stdio.h>
int main()
{
	float a;
	printf("Enter any number=>");
	scanf("%f",&a);
	if (a==0)
		printf("%f is equal to 0",a);
	else if(a>0)
		printf("%f is positive",a);
	else
		printf("%f is negative",a);
	return 0;
}

/* Output
Enter any number=>24
24.000000 is positive
--------------------------------
Process exited after 5.108 seconds with return value 0
Press any key to continue . . .
 */