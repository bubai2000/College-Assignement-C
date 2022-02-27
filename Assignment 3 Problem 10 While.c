/* Assignment 3 Problem 10: Checking if a number is palindrome
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	int n,m,num,numr=0;
	printf("Enter the number =>");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		m=n%10;
		numr=(numr*10)+m;
		n=n/10;
	}
	if(num==numr)
	{
		printf("%d is palindrome number",num);
	}
	else
	{
		printf("%d is NOT palindrome number",num);
	}
	return 0;
}

/* Output 1
Enter the number =>14541
14541 is palindrome number
--------------------------------
Process exited after 4.626 seconds with return value 0
Press any key to continue . . .

Output 2
Enter the number =>876864
876864 is NOT palindrome number
--------------------------------
Process exited after 2.67 seconds with return value 0
Press any key to continue . . .
 */