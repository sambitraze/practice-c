#include<stdio.h>
#include<string.h>

struct Bio{
    char name[100];
    int roll;
    char gender[10];
    int marks;
};
 void main()
 {
    struct Bio b;
    printf("\nEnter name of student:");
    scanf("%s",b.name);
    printf("\nEnter roll:");
    scanf("%d",&b.roll);
    printf("\nEnter gender:");
    scanf("%s",b.gender);
    printf("\nEnter marks:");
    scanf("%d",&b.marks);

     printf("\nName:");
     puts(b.name);
     printf("\nroll: %d",b.roll);
     printf("\n\nGender:");
     puts(b.gender);
     printf("\nMarks: %d",b.marks);
 }