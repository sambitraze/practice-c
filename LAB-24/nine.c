#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
 
void main() {
   FILE *fp1, *fp2;
   char a;
 
   fp1 = fopen("test.txt", "r");
   if (fp1 == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fp2 = fopen("test1.txt", "w");
   if (fp2 == NULL) {
      puts("Not able to open this file");
      fclose(fp1);
      exit(1);
   }
 
   do {
      a = fgetc(fp1);
      a = toupper(a);
      fputc(a, fp2);
   } while (a != EOF);
   fclose(fp1);
   fclose(fp2);
}
#include<stdio.h>
 int factorial(int a)
 {
    if(a == 0)
      return 0;
   else
   {
      return(a*(factorial(a-1)));
   }
   
 }