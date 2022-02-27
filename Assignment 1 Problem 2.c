/* Assignent 1 Problem 2: enter the radius of a circle and print the area of the perimeter.
Submityed by Soumyadip Nayak, MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float r,a;
	printf("Enter the radius of the circle=>");
	scanf("%f",&r);
	a=4*atan(1)*r*r; //Area of circle=pi*r^2, tan^-1(1)=pi/4
	printf("Area of circle with radius %f is = %f",r,a); 
	return 0;
}

/* Output
Enter the radius of the circle=>51.3
Area of circle with radius 51.299999 is = 8267.697266
*/