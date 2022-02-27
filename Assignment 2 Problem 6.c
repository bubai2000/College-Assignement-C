/* Assignment 2 Problem 6: Enter 10 numbers and print sum
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int i,p,sum=0;
		for(i=1;i<=10;i++)
		{
			printf("\nEnter number %d=>",i);
			scanf("%d",&p);
			sum+=p;
		}
		printf("\nSummation of entered numbers = %d",sum);
		return 0;
}

/* Output
Enter number 1=>31

Enter number 2=>23

Enter number 3=>45

Enter number 4=>11

Enter number 5=>9

Enter number 6=>67

Enter number 7=>75

Enter number 8=>93

Enter number 9=>3

Enter number 10=>56

Summation of entered numbers = 413
[Program finished]
 */