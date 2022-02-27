/* Assignment 4 Problem 7: Check whether a year is leap year or not
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	int y;
	printf("Enter any year=>");
	scanf("%d",&y);
	if(y%100==0 && y%400==0)
		printf("%d is a leap year",y);
	else if (y%100!=0 && y%4==0)
		printf("%d is a leap year",y);
	else if(y%4!=0)
		printf ("%d is not a leap year",y);

return 0;
}

/* Output
Enter any year=>1947
1947 is not a leap year
--------------------------------
Process exited after 3.67 seconds with return value 0
Press any key to continue . . .
 */