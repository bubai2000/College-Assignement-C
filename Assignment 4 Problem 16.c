/* Assignment 4 Problem 16: Find roots of a quadratic equation
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,d;
	printf("Enter the values of a,b,c of the the quardratic equation aX^2+bX+c=0 \n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d>=0)
	{  
		x1=(-b+pow(d,0.5))/2*a;
		x2=(-b-pow(d,0.5))/2*a;
    	printf("The roots of the equation are: X1= %f and X2= %f",x1,x2);
    }
   if(d<0)
    {
    	printf("The roots of the equation are : X1= %f+%fi and X2= %f-%fi (where i^2=-1)",-b/2*a,pow(-d,0.5)/2*a,-b/2,pow(-d,.5)/2*a)	;
	}
	return 0;
	 
}
/* Output
Enter the values of a,b,c of the the quardratic equation aX^2+bX+c=0
41
13
51
The roots of the equation are : X1= -266.500000+1855.787905i and X2= -6.500000-1855.787905i (where i^2=-1)
--------------------------------
Process exited after 4.132 seconds with return value 0
Press any key to continue . . .
 */