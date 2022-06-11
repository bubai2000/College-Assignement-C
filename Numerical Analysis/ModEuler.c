/* Modified Euler's Method
Roll no: MTUG/118/19 */

#include<stdio.h>
#include<math.h>
float f (float x, float y)
{
	return (log10(x+y));
}
int main()
{
	int i;
	float xi,wi,w=0,x,yi,xf,h,y;
	printf("Enter the initial values of X and Y\n");
	scanf("%f%f",&xi,&yi);
	printf("Enter the step width h:\n");
	scanf("%f",&h);
	printf("Enter the value of X for which you want to find the value of Y\n");
	scanf("%f",&xf);
	printf("x\t\ty\t\ty'\t\ty*\t\ty'\n");
	wi=yi;
	
	for(i=0;i<4;i++)
	{
		while (xi<xf)
		{ 
			w=wi+h*f(xi,yi);
			y=yi+(h/2)*(f(xi,yi)+f(xi+h,w));
			printf("\n%f\t %f\t %f\t %f\t %f",xi,yi,f(xi,yi),w,y);
			wi=w;
			yi=y;
			wi=wi+h;
			xi=xi+h;
		}
	}
	printf("\nX= %f\t Y=%f",xi,yi);
	printf("\n The value of y is %0.5f",yi);
}

/*Output
Enter the initial values of X and Y
0 1
Enter the step width h:
.2
Enter the value of X for which you want to find the value of Y
.4
x               y               y'              y*              y'

0.000000         1.000000        0.000000        1.000000        1.007918
0.200000         1.007918        0.082038        1.216408        1.036977
X= 0.400000      Y=1.036977
 The value of y is 1.03698
*/