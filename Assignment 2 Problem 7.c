/* Assignent 2 Problem 7: Finding maximum of 5 numbers 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int max=0,i,n;
		for(i=1;i<=5;i++)
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
Enter number 1=>35

Enter number 2=>12

Enter number 3=>13

Enter number 4=>45

Enter number 5=>23

Maximum of them = 45
[Program finished]
 */