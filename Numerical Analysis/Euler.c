/* Euler's method
Roll no.: MTUG/119/19 */
#include<stdio.h>
#include<math.h>
float f (float x, float y)
{
	return (log10(x+y));
}
int main()
{
	int i;
	float xi,yi,xf,h,y;
	printf("Enter the initial values of X and Y\n");
	scanf("%f%f",&xi,&yi);
	printf("Enter the step width h:\n");
	scanf("%f",&h);
	printf("Enter the value of X for which you want to find the value of Y\n");
	scanf("%f",&xf);
	printf("x\t\ty\t\ty'\t\thy'\t\ty'+hy'\n");
	for(i=0;i<2;i++)
    {
		while (xi<xf)
	    {
		    y=yi+h*f(xi,yi);
		    printf("\n %f\t %f\t %f\t %f\t %f",xi,yi,f(xi,yi),h*f(xi,yi),y);
		    yi=y;
		    xi=xi+h;
	    }
    }
	printf("\nX= %f\t Y=%f\n",xi,yi);
	printf("The value of y is %0.5f\n\n",yi);
}

/*Output
Enter the initial values of X and Y
0 1
Enter the step width h:
.2
Enter the value of X for which you want to find the value of Y
.4
x               y               y'              hy'             y'+hy'

 0.000000        1.000000        0.000000        0.000000        1.000000
 0.200000        1.000000        0.079181        0.015836        1.015836
X= 0.400000      Y=1.015836
The value of y is 1.01584
*/