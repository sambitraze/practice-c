#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if(a%2)
		printf("Odd!! \n");
	else
		printf("Even!! \n");
	return 0;
}
