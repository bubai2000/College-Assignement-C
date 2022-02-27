/* Assignment 4 Problem 21: Program to compute the value of f(x,y) , where f(x,y) is defined by
f(x,y)= log (1-x-y),if x>=0,y>=0,x+y<1
	  = 0, elsewhere
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main ()
{
	float x1,x,y;
	printf("Enter the any values  of x & y=>\n");
	scanf("%f%f",&x,&y);
	if(x>=0&&y>=0&& x+y<1)
	{
		x1=log(1-x-y);
		printf("The value of the given function is %f when x=%f and y=%f",x1,x,y);
	}
	else 
		printf("The value of the given function is 0 when x=%f and y=%f",x,y);
	return 0;
}

/* Output
Enter the any values  of x & y=>
0.3
0.4
The value of the given function is -1.203973 when x=0.300000 and y=0.400000
--------------------------------
Process exited after 4.041 seconds with return value 0
Press any key to continue . . .
 */