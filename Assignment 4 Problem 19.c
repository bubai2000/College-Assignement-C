/* Assignment 4 Problem 19: Compute the value of f(x) for x=0(2)10, when f(x) is defined as
 f(x)= x^2+sinx; if x<2
      =2, if x=2
      =x^3+e^x,x>2
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float x1;
	for(x=0;x<=10;x+=2)
	{
		if(x<2)
		{
			x1=x*x+sin(x);
			printf("The value of the given function is %f , when x= %d \n",x1,x);
		}
		else if(x==2)
		{
			x1=2;
			printf("The value of the given function is %f , when x= %d\n",x1,x);
		}
		else if(x>2)
		{
			x1=pow(x,3)+exp(x);
			printf("The value of the given function is %f , when x= %d\n",x1,x);
		}
				
	}
	return 0;
	
}
/* Output
The value of the given function is 0.000000 , when x= 0
The value of the given function is 2.000000 , when x= 2
The value of the given function is 118.598152 , when x= 4
The value of the given function is 619.428772 , when x= 6
The value of the given function is 3492.958008 , when x= 8
The value of the given function is 23026.464844 , when x= 10

--------------------------------
Process exited after 0.01485 seconds with return value 0
Press any key to continue . . .
 */