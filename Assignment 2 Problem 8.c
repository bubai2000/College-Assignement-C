/* Assignment 2 Problem 8: Finding maximum between n numbers
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int max=0,i,n,p;
		printf("Enter number of items=>");
		scanf("%d",&p);
		for(i=1;i<=p;i++)
		{
			printf("\nEnter number %d=>",i);
			scanf("%d",&n);
			if(n>=max)
			{
				max=n;
			}
		}
		printf("\nMaximum of them = %d",max);		
		return 0;
}

/* Output
Enter number of items=>7

Enter number 1=>23

Enter number 2=>903

Enter number 3=>1256

Enter number 4=>878

Enter number 5=>12

Enter number 6=>546

Enter number 7=>745

Maximum of them = 1256
[Program finished]
 */