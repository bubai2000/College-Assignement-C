/* Assignment 2 Problem 21: LCM of two numbers
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int a,b,i,lcm,g=1;
	printf("Enter number 1=>");
	scanf("%d",&a);
	printf("Enter number 2=>");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	lcm=((a*b)/g);
	printf("LCM of %d and %d = %d",a,b,lcm);
	return 0;
}

/* Output
Enter number 1=>68
Enter number 2=>187
LCM of 68 and 187 = 748
--------------------------------
Process exited after 8.118 seconds with return value 0
Press any key to continue . . .
 */
