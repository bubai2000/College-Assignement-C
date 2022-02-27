/* Assignment 2 Problem 27: Printing sin x
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float t,term,x,sin=0;
	printf("Enter no of terms=>");
	scanf("%d",&n);
	printf("Enter value of x in degrees=>");
	scanf("%f",&x);
	t=x*3.14159/180;
	for(i=0;i<n;i++)
	{
		term=(pow(-1,i)*pow(t,2*i+1))/tgamma(2*i+2);
		sin+=term;
	}
	printf("sin %f = %f",x,sin);
	return 0;
}

/* Output
Enter no of terms=>90
Enter value of x in degrees=>15
sin 15.000000 = 0.258819
--------------------------------
Process exited after 40.67 seconds with return value 0
Press any key to continue . . .
 */