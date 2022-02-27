/* Assignment 4 Problem 9: Input any alphabet and check whether it is vowel or consonant
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
	char a;
	printf("Enter any alphabet=>");
	scanf("%c",&a);
	if (a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
		printf("%c is a vowel",a);
	else
		printf("%c is a consonant",a);
	return 0;
	
}

/* Output
Enter any alphabet=>U
U is a vowel
--------------------------------
Process exited after 2.05 seconds with return value 0
Press any key to continue . . .
 */