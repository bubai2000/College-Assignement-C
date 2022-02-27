/* Assignment 4 Problem 17: Compute the value of f(x) for x=0(1)10, when f(x) is defined as
 f(x)= xcosx;0<=x<=2
      =xe^x;2<x<=5
	  =log(1+x),x>5
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x, i;
	float x1;
	for(x=0;x<=10;x=x+1)
	{
		if(x>=0 && x<=2)
		{
			x1=x*cos(x);
			printf(" The value of f(x) is %f , when x=%d \n",x1,x);
		}
		else if(x>2 && x<=5)
		{
			x1=x*exp(x);
			printf(" The value of f(x) is %f , when x=%d \n",x1,x);
		}
		else if (x<=10 && x>5)
		{
			x1=log(1+x);
			printf(" The value of f(x) is %f , when x=%d \n",x1,x);
		}
	}
	return 0;
}

/* Output
 The value of f(x) is 0.000000 , when x=0
 The value of f(x) is 0.540302 , when x=1
 The value of f(x) is -0.832294 , when x=2
 The value of f(x) is 60.256611 , when x=3
 The value of f(x) is 218.392593 , when x=4
 The value of f(x) is 742.065796 , when x=5
 The value of f(x) is 1.945910 , when x=6
 The value of f(x) is 2.079442 , when x=7
 The value of f(x) is 2.197225 , when x=8
 The value of f(x) is 2.302585 , when x=9
 The value of f(x) is 2.397895 , when x=10

--------------------------------
Process exited after 0.01762 seconds with return value 0
Press any key to continue . . .
 */