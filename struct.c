#include<stdio.h>
#include<string.h>
struct DOB
{
int date;
int month;
int year;
}V1;
struct student
{
    char name[20];
    int roll_number;
    int marks;
    struct DOB V1;
}s[100];
void main()
{
int n,i;
printf("Enter no of students\n");
scanf("%d",&n);
printf("Insert record of students",i+1);
for(i=0;i<n;i++)
{
printf("Enter name\n");
scanf("%s",&s[i].name);
printf("Enter roll no");
scanf("%d",&s[i].roll_number);
printf("Enter marks");
scanf("%d",&s[i].marks);
printf("Enter DOB of students\t");
scanf("%d%d%d",&s[i].V1.date,&s[i].V1.month,&s[i].V1.year);
}
printf("Display record");
for(i=0;i<n;i++)
{
    printf("Display record of students %d",i+1);
    printf("Name \t");
    puts(s[i].name);
    printf("Roll no %d\n",s[i].roll_number);
    printf("Marks %d \n",s[i].marks);
    printf("DOB %d%d%d",s[i].V1.date,s[i].V1.month,s[i].V1.year);
}

}