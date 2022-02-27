/* Assignment 1 Problem 7: Calculating area of a triangle
Roll no.: MTUG/118/19 */
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,ar;
	printf("Enter length of three sides of the trinagle:\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2; // Semiperimeter of the trinangle
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the traigle with sides %f unit, %f unit and %f unit is = %0.3f sq. unit", a,b,c,ar);
}

/*Output
Enter length of three sides of the trinagle:
5
6.8
10.3
Area of the traigle with sides 5.000000 unit, 6.800000 unit and 10.300000 unit is = 14.598 sq. unit
[Program finished]
*/