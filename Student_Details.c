#include<stdio.h>
#include<conio.h>
struct std
{
	int roll_no;
	char name[20];
	char branch[5];
	int per_10;
	int per_12;
	char no[10];
	char address[25];
};
void main()
{
  struct student std[200];
  int i, n;
  printf("Enter the number of students");
  scanf("%d", &n);
  printf("Enter the details: ");
  for(i=0; i<n; i++)
  {
    printf("\nEnter Name: ");
    scanf("%s", &name[i]);
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll_no[i]);
    printf("\nEnter Address: ");
    scanf("%s", &address);
    printf("\nEnter Contact: ");
    scanf("%s", &no[i]);
    printf("\nEnter Branch: ");
    scanf("%s", &branch[i]);
  }
  printf("\nThe details are:\n");
  for(i=0; i<n; i++)
  {   
    printf("Roll No: ", roll_no[i]);
    printf("Name: ", name[i]);
    printf("Branch: ", branch[i]);
    printf("Contact: ", no[i]);
    printf("Address: ", address[i]);
  }
  getch();
}