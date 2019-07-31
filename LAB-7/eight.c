#include<stdio.h>

int main()
{	
	int a,b,c,d,e,tot;
	float per;
	printf("\t\t........KIIT University garding system.........\n\n");
	printf("\nEnter marks in five subject out of 100:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	tot=a+b+c+d+e;
	per=tot/5;
	if(per>90)
		printf("your total marks is: %d and percentage is: %f hence you secured ..O.. grade\n", tot, per);
	else if(per>80)
		printf("your total marks is: %d and percentage is: %f hence you secured ..E.. grade\n", tot, per);
	else if(per>70)
		printf("your total marks is: %d and percentage is: %f hence you secured ..A.. grade\n", tot, per);
	else if(per>60)
		printf("your total marks is: %d and percentage is: %f hence you secured ..B.. grade\n", tot, per);
	else if(per>50)
		printf("your total marks is: %d and percentage is: %f hence you secured ..C.. grade\n", tot, per);
	else if(per>40)
		printf("your total marks is: %d and percentage is: %f hence you secured ..D.. grade\n", tot, per);
	else if(per>30)
		printf("your total marks is: %d and percentage is: %f hence you secured ..E.. grade\n", tot, per);
	else 
		printf("your total marks is: %d and percentage is: %f hence you have ..failed..\n", tot, per);
	return 0;
}
