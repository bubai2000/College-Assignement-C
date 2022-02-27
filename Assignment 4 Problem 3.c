/* Assignment 4 Problem 3: Find the maximum between three numbers
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i;
	float a,max=0;
	for(i=1;i<=3;i++)
	{
		printf("Enter number %d=>",i);
		scanf("%f",&a);
		if(a>=max)
			max=a;
	}
	printf("Maximum of them = %f",max);
	return 0;
}

/* Output
Enter number 1=>23
Enter number 2=>-37.6
Enter number 3=>47
Maximum of them = 47.000000
--------------------------------
Process exited after 9.743 seconds with return value 0
Press any key to continue . . .
 */