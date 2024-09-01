#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
int marks ;
char name[20];
}s1;
void main ()
{clrscr();

printf("enter roll::");
scanf("%d",&s1.roll);
printf("enter marks ::");
scanf("%d",&s1.marks);
printf("enter name ::");
scanf("%s",&s1.name);
printf("\n\n-----------------------------");
printf("%d",s1.roll);
printf("%d",s1.marks);
printf("%c",s1.name);

getch();
}
