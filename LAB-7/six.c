#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three integers:");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b&&a>c)
		printf("Greater no is: %d \n", a);
	else if(b>c&&b>a)
		printf("Greater no is: %d \n", b);
	else 
		printf("Greater no is: %d \n", c);
	return 0;
}
