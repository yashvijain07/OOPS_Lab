#include<stdio.h>
#include<conio.h>
struct student
{
  int roll_no;
  char name[20];
  char branch[5];
};
void display(struct student std)
void main()
{
  struct student std;
  int i, n;
  clrscr();
  printf("Enter the details of students:\n");
  printf("\nEnter Name: ");
  scanf("%s", &std.name);
  printf("\nEnter Roll Number: ");
  scanf("%d", &std.roll_no);
  printf("\nEnter Branch: ");
  scanf("%s", &std.branch);
  getch();
}
void display(struct student std)
{  
  int i, n;
  printf("\nThe details are:\n");
  printf("\n\nRoll no.\tName\t\tBranch\n");
  printf("%d\t\t%s\t\t%s\n\n", std.roll_no, std.name, std branch);
}