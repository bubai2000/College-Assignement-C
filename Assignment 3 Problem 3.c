/* Assignment 3 Problem 3: Enter 10 numbers and calculate their sum
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	do
	{
		printf("Enter number %d=>",i);
		scanf("%d",&n);
		sum+=n;
		i++;
	}while(i<=10);
	printf("Sum=%d",sum);
	return 0;
}

/* Output
Enter number 1=>32
Enter number 2=>21
Enter number 3=>56
Enter number 4=>98
Enter number 5=>11
Enter number 6=>3
Enter number 7=>45
Enter number 8=>64
Enter number 9=>73
Enter number 10=>82
Sum=485
--------------------------------
Process exited after 28.63 seconds with return value 0
Press any key to continue . . .
 */