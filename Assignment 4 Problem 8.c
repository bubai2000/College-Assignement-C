/* Assignment 4 Problem 8: Check whether a charcter is alphabet or not
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	char a;
	printf("Enter any character=>");
	scanf("%c",&a);
	if(a>='a' && a<='z'	|| a>='A' && a<='Z')
		printf("%c is alphabet",a);
	else 
		printf("%c is not alphabet",a);
	return 0;
}
 
/* Output
Enter any character=>s
s is alphabet
--------------------------------
Process exited after 2.438 seconds with return value 0
Press any key to continue . . .
 */