/* Assignment 4 Problem 11: Check whether a character is uppercase or lowercase alphabet. 
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{ 
	char a;
	printf(" Enter any character=>");
	scanf("%c",&a);
	if (a>='a' && 'z'>=a)
		printf("%c is lower case alphabet",a);
	else if (a>='A' && a<='Z')
		printf("%c is upper case alphabet",a);
	else 
		printf("%c is not alphabet",a);
return 0;
}
/* Output
 Enter any character=>c
c is lower case alphabet
--------------------------------
Process exited after 2.347 seconds with return value 0
Press any key to continue . . .
 */