/* Assignment 4 Problem 14: Input all sides of a triangle and check if it is equilateral,isocial or scalene triangle 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	float a,b,c;	
	printf("Enter the three sides=>");
	scanf("%f%f%f",&a,&b,&c);
	if (a==b && b==c)
		printf("These sides form a equilateral triangle");
	else if(a==b || b==c || a==c)
		printf("These sides form a isosceles triangle");
	else if (a!=b!=c)
		printf("These sides form a scalene triangle");
	return 0;
}

/* Output
Enter the three sides=>15
13
14
These sides form a scalene triangle
--------------------------------
Process exited after 9.277 seconds with return value 0
Press any key to continue . . .
 */