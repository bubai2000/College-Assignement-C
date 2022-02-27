/* Assignment 4 Problem 18: Compute the value of f(x)  where f(x) is defined as
 f(x)=xe^x;x<0
     =2;x=0
	 =sin x +log10 (1+x) ; x>2
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x,x1;
	printf("Enter any value of x:\n");
	scanf("%f",&x);
	if (x<0)
	{
		x1=x*exp(x);
		printf("The value of the given function is %fat x=%f",x1,x);
	}
	else if(x==0)
	{
		x1=2;
		printf("The value of the given function is %f at x=%f",x1,x);
	}
	else if(x>2)
	{
		x1=sin(x)+(log(1+x)/log(10));	
		printf("The value of the given function is %f at x=%f",x1,x);
	}
	if(x>0 && x<=2)
		printf ("The function is undefined for x=%f",x);
	return 0;
	
}

/* Output
Enter any value of x:
9.7
The value of the given function is 0.757623 at x=9.700000
--------------------------------
Process exited after 2.802 seconds with return value 0
Press any key to continue . . .
 */