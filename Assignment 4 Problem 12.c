/* Assignment 4 Problem 12: Input the angles of the tringle and check whether it is valid or not.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	float a,b,c;
	printf("Enter the three angles \n");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b+c==180 && a>0 && b>0 && c>0)
		printf("This angles form a tringle");
	else 
		printf("This angles do not form a tringle");
	return 0;
}

/* Output
Enter the three angles
31
52
97
This angles form a tringle
--------------------------------
Process exited after 8.145 seconds with return value 0
Press any key to continue . . .
 */