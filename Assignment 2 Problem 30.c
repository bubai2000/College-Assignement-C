/* Assignment 2 Problem 30: Program to find the value of the following function f(x) for x=0(1)10 where
f(x)=	x^2+sinx ,if x<2
		2		 ,if x=2
		x^3+e^x  ,if x>2
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float f;
	for(x=0;x<=10;x++)
	{
		if(x<2)
		{
			f=(x*x)+sin(x);
		}
		else if(x==2)
		{
			f=2;
		}
		else
		{
			f=pow(x,3)+exp(x);
		}
		printf("f(%d)=%f\n",x,f);
	}
	return 0;
}

/* Output
f(0)=0.000000
f(1)=1.841471
f(2)=2.000000
f(3)=47.085537
f(4)=118.598152
f(5)=273.413147
f(6)=619.428772
f(7)=1439.633179
f(8)=3492.958008
f(9)=8832.083984
f(10)=23026.464844

--------------------------------
Process exited after 0.02874 seconds with return value 0
Press any key to continue . . .
 */