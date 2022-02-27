/* Assignent 2 Problem 3: Program to display english alphabates
Roll no.: MTUG/118/19*/
#include<stdio.h>
int main()
{
		char i;
		printf("Printing all english alphabates:\n");
		printf("Higher case:\n");
		for(i='A';i<='Z';i++)
		{
			printf("%c ",i);
		}
		printf("\nLower case:\n");
		for(i='a';i<='z';i++)
		{
			printf("%c ",i);
		}
		return 0;
}

/* Output
Printing all english alphabates:
Higher case:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
Lower case:
a b c d e f g h i j k l m n o p q r s t u v w x y z
[Program finished]
 */