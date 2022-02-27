/* Assignment 1 Problem 4: Find value of given f(x) when x=0.2
Roll no.: MTUG/118/19 */
#include<stdio.h>
#include<math.h>
int main()
{
	float x=0.2,f;
	f=(x*x)+exp(2*x)+4-sinh(3*x);
	printf("Value of f(x) when x=%f is = %f", x, f);
}

/*Output
Value of f(x) when x=0.200000 is = 4.895171
[Program finished]
*/