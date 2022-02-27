/* Assignent 1 Problem 3: Find the real roots of the quadratic equation ax^2+bx+c+=0,where a,b,c will be provided by the user
(Simple Format)
Submityed by Soumyadip Nayak, MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x;
	printf("Enter the coefficients respectively:\n");
	scanf("%f %f %f", &a,&b,&c);
	d=(b*b)-(4*a*c);
	x=(-b+sqrt(d))/(2*a);
	printf("\n Root 1 = %f", x);
	x=(-b-sqrt(d))/(2*a);
	printf("\n Root 2 = %f", x);
	return 0;
}

/* Output
Enter the coefficients respectively:
3
4
1

 Root 1 = -0.333333
 Root 2 = -1.000000
*/