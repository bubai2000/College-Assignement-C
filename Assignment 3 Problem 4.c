/* Assignment 3 Problem 4: Enter any 10 numbers and find their maximum
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,i=1,max=0;
	do
	{
		printf("Enter number %d=>",i);
		scanf("%d",&n);
		i++;
		if(n>max)
		{
			max=n;
		}
	}while(i<=10);
	printf("Maximum of them = %d",max);
	return 0;
}

/* Output
Enter number 1=>8758
Enter number 2=>76836
Enter number 3=>23232
Enter number 4=>7767
Enter number 5=>897867
Enter number 6=>534534656
Enter number 7=>768787
Enter number 8=>8663434
Enter number 9=>765576
Enter number 10=>243
Maximum of them = 534534656
--------------------------------
Process exited after 20.41 seconds with return value 0
Press any key to continue . . .
 */