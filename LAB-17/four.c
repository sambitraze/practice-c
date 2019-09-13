#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100],r[100];
 
   printf("Enter a string to reverse\n");
   gets(arr);
   strcpy(r,arr);
   strrev(r);
 
   printf("Reverse of the string is \n%s\n", r);
   if(strcmp(arr,r)==0)
    printf("\n String is pallindrome:");
   else
    printf("\n String is not pallindrome:");
   

   return 0;
}
