/* Assignment 4 Program 1: Input marks of five subjects Physics, Chemistry, Biology, Mathematics and computer . Calculate percentage and grade according to following
Percentage >=90% : Grade A
Percentage >=80% : Grade B
Percentage >=70% : Grade C
Percentage >=60% : Grade D
Percentage >=40% : Grade E
Percentage <=40% : Grade F
Roll no.: MTUG/118/19*/
#include <stdio.h>
#include<math.h>
int main()
{
	int fm,p,ch,b,m,co,per;
	printf("Enter the full marks of each test\n");
	scanf("%d",&fm);
	printf("Input the marks of Physics, Chemistry, Biology, Mathematics and Computer \n");
	scanf("%d%d%d%d%d",&p,&ch,&b,&m,&co) ;
	per=(p+ch+b+m+co)*100/(5*fm);
	if(per>=90)
		printf("Grade A");
	else if(per>=80 && per<90)
		printf("Grade B");
	else if(per>=70 && per<80)
		printf("Grade C");
	else if(per>=60 && per<70)
		printf("Grade D");
	else if(per>=40 && per<60)
		printf("Grade E");
	else if( per<40)
		printf("Grade F");
	
	return 0;
}

/* Output
Enter the full marks of each test
40
Input the marks of Physics, Chemistry, Biology, Mathematics and Computer
31
28
23
36
34
Grade C
--------------------------------
Process exited after 150.1 seconds with return value 0
Press any key to continue . . .
 */