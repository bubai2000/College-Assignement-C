/* Assignment 5a Problem 5: Write a C program to enter any 10 numbers in a single dimension array and print their sum. 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,k;
	float a[10],s=0;
	printf("Enter any 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",& a[i]);
		s=s+a[i];
	}
	printf("The entered numbers are=>\n");
	for(i=0;i<10;i++)
	{
		printf("%f\n",a[i]);
	}
	printf("\nThe sum of those above numbers is %f",s);
	return 0;
	
}

/* Output
Enter any 10 numbers
2323
-30202
874839.878
76173627
763.34664
-47455.874
6476374
38467647
-87467384
7346746.987384478
The entered numbers are=>
2323.000000
-30202.000000
874839.875000
76173624.000000
763.346619
-47455.875000
6476374.000000
38467648.000000
-87467384.000000
7346747.000000

The sum of those above numbers is 41797276.000000
--------------------------------
Process exited after 26.2 seconds with return value 0
Press any key to continue . . .
 */