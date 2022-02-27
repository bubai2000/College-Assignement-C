/* Assignment 5a Problem 4: Write a C program to enter any 10 numbers and print it in single dimension array.
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int i,k;
	float a[10];
	printf("Enter any 10 numbers \n");
	for (i=1;i<=10;i++)
	{
		scanf("%f",& a[i]);
	}
	printf("The entered numbers are \n");
	for(i=1;i<=10;i++)
	{
		printf("%f\n",a[i]);
	}
	return 0;
}

/* Output
Enter any 10 numbers
897
-23783
3656
878
434.734
-45783.234
34
21.12
123.767
9887
The entered numbers are
897.000000
-23783.000000
3656.000000
878.000000
434.734009
-45783.234375
34.000000
21.120001
123.766998
9887.000000

--------------------------------
Process exited after 34.83 seconds with return value 0
Press any key to continue . . .
 */