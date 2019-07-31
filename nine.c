#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if(ch>='0'&&ch<='9')
		printf("Character is a digit.\n");
	else if(ch>='a'&&ch<='z')
		printf("Character is a lowercase alphabet.\n");
	else if(ch>='A'&&ch<='Z')
		printf("Character is a uppercase alphabet.\n");
	else
		printf("Character is a special character.\n");
		
	return 0;
}
	
	
