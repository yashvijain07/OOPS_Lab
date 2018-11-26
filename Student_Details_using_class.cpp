#include<iostream.h>
#include<conio.h>
class student
{
  public:
    int rollno;
    char name[20], branch[5];
    void getdetails()
    {
      cout<<"Enter Roll No: "; cin>>rollno; 
      cout<<"Enter Name: "; cin>>name; 
      cout<<"Enter Branch: "; cin>>branch; 
    }
    void show()
    {
      cout<<"Roll No.: "<<rollno;     
      cout<<"\nName: "<<name;     
      cout<<"\nBranch: "<<branch;     
    }
};
void main()
{
  student s1;
  clrscr();
  cout<<"\nEnter Details: ";
  s1.getdetails();
  cout<<"\nDetails are: ";
  s1.show();
  student s2;
  cout<<"\nEnter Details: ";
  s2.getdetails();
  cout<<"\nDetails are: ";
  s2.show();
  getch();
}