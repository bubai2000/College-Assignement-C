/* Assignment 2 Problem 28: Printing cos x
Roll no.: MTUG/118/19*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float t,term,x,cos=0;
	printf("Enter no of terms=>");
	scanf("%d",&n);
	printf("Enter value of x in degrees=>");
	scanf("%f",&x);
	t=x*3.14159/180;
	for(i=0;i<n;i++)
	{
		term=(pow(-1,i)*pow(t,2*i))/tgamma(2*i+1);
		cos+=term;
	}
	printf("cos %f = %f",x,cos);
	return 0;
}

/* Output
Enter no of terms=>90
Enter value of x in degrees=>30
cos 30.000000 = 0.866026
--------------------------------
Process exited after 7.328 seconds with return value 0
Press any key to continue . . .
 */