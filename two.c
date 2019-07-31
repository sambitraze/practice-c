#include <stdio.h>

int main()

{

	char ch;

	printf("Enter an alphabet:");
	scanf("%c", &ch);
	if(ch>=97&&ch<=122)
		{
			ch = ch-32;
 			printf("converted to capital %c \n", ch);
		}
        	
   	else
   		printf("Already capital!");
   		
	return 0;

}
