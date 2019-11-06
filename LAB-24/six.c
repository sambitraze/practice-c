#include <stdio.h>
 
void main()
{
    FILE *fptr;
    char name[20];
    char gender[10];
    int roll;
    int marks;
 
    fptr = fopen("emp.txt", "w");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name    = %s\n", name);
    printf("Enter the roll\n");
    scanf("%d", &roll);
    fprintf(fptr, "ROll     = %d\n", roll);
    printf("Enter the marks\n");
    scanf("%d", &marks);
    fprintf(fptr, "Marks  = %d\n", marks);    
    printf("Enter the Gender \n");
    scanf("%s", gender);
    fprintf(fptr, "Gender    = %s\n", gender);
    fclose(fptr);
}