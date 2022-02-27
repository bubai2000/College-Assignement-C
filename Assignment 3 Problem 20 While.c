/* Assignment 3 Problem 20: Sum of the series y=x+x^3/3+x^5/5+....+x^15/15 when x=0.1,0.3,0.5,0.7,0.9
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x=0.1,y=0,d;
	while(x<=0.9)
	{
		d=1;
		while(d<=15)
		{
			y=y+(pow(x,d))/d;
			d=d+2;
		}
		printf("Value of y=%.12f when x=%.1f",y,x);
		printf("\n");
		x=x+0.2;
	}
	return 0;
}
/* Output
Value of y=0.100335344672 when x=0.1
Value of y=0.409854918718 when x=0.3
Value of y=0.959160566330 when x=0.5
Value of y=1.826215863228 when x=0.7
Value of y=3.260495662689 when x=0.9

--------------------------------
Process exited after 0.01321 seconds with return value 0
Press any key to continue . . .
 */