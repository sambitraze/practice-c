#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[50];
    char gender[10];
    char branch[10];
    float CGPA;
};
void main()
{
    int a;
    printf("Enter no of students:");
    scanf("%d", &a);
    struct student s1[a];

    for(int i=0;i<a;i++)
    {

    printf("\n\n\t\t\t\t Enter Data for student %d", i+1);

    printf("\nEnter roll number:");
    scanf("%d",&s1[i].roll);

    printf("\nEnter name:");
    scanf("%s",s1[i].name);

    printf("\nEnter Gender:");
    scanf("%s",s1[i].gender);    

    printf("\nEnter Branch:");
    scanf("%s",s1[i].branch);

    printf("\nEnter CGPA:");
    scanf("%f",&s1[i].CGPA);

    }

    for(int i=0;i<a;i++)
    {
        printf("\n\n\t\t\t\t BIO-DATA for student %d", i+1);
        printf("\n\nRoll: %d",s1[i].roll);
        printf("\n\nName:");
        puts(s1[i].name);
        printf("\nGender:");
        puts(s1[i].gender);
        printf("\nBranch:");
        puts(s1[i].branch);
        printf("\nCGPA: %f",s1[i].CGPA);
    }
    
}
   