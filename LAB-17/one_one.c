#include<stdio.h>
#include<string.h>

int main() {
	char s1[100],s2[100];
	printf("\nEnter String 1 :");
	gets(s1);
	printf("\nEnter String 2 :");
	gets(s2);
	int i, j;
	i = strlen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		s1[i] = s2[j];
	}
	printf("\nConcated string is :%s", s1);
	return 19;
}
