/* Assignment 4 Problem 2: Find the maximum between two numbers
Roll no.: MTUG/118/19
*/
#include<stdio.h>
int main()
{
	float a ,b;
	printf ("Enter any two numbers\n");
	scanf("%f%f",&a,&b);
	if (a>=b)
		printf("The maximum between %f and %f is %f",a,b,a);
	else 
		printf("The maximum between %f and %f is %f",a,b,b);
	return 0;
	
}

/* Output
Enter any two numbers
31
-15.5
The maximum between 31.000000 and -15.500000 is 31.000000
--------------------------------
Process exited after 12.38 seconds with return value 0
Press any key to continue . . .
 */