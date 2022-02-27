/* Assignment 4 Problem 13: Input the sides of the tringle and check whether it is valid or not.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	float a,b,c;
	printf("Enter the three sides=>");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b<=c || a+c<=b || c+b<=a)
		printf("These sides do not  form a triangle");
	else 
		printf("These sides form a triangle");
	return 0;
}

/* Output
Enter the three sides=>13 15 11
These sides form a triangle
--------------------------------
Process exited after 8.485 seconds with return value 0
Press any key to continue . . .
 */