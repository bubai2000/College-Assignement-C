/* Assignent  2 Problem 9: Printing Fibonnaci Series
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		int n,i,c,a=0,b=1;
		printf("Enter number of items to be printed=>");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			printf("\nElement %d = %d",i,a);
			c=b;
			b=a+b;
			a=c;
		}
		return 0;
}

/* Output
Enter number of items to be printed=>8

Element 1 = 0
Element 2 = 1
Element 3 = 1
Element 4 = 2
Element 5 = 3
Element 6 = 5
Element 7 = 8
Element 8 = 13
[Program finished]
 */
