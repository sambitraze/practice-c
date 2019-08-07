#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Enter two number: \n");
	scanf("%d %d", &a, &b);
	if(a>b)
		printf("A is greater\n");
	else
		printf("B is greater\n");
	return 0;
}
