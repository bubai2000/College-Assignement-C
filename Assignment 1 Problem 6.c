/* Assignment 1 Problem 6: Entering two numbers and calculating given expression
Roll no.: MTUG/118/19 */
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r;
	printf("Entrer any two numbers:\n");
	scanf("%f%f",&x,&y);
	r=3*pow(x,2)+2*pow(y,2)+5*x+3*y+10;
	printf("Value of given expression when x=%f and y=%f is = %f", x,y,r);
}

/*Output
Entrer any two numbers:
5
6
Value of given expression when x=5.000000 and y=6.000000 is = 200.000000
[Program finished]
*/