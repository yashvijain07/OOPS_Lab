#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class array
{   
    int *p, size;
  public:
    void getsize(int);
    void read();
    void show();
    void destroy();
};
void array::getsize(int s)
{
  size = s;
  p = new int[size];
}
void array::read()
{
  cout<<"Enter elements:";
  for(int i=0;i<size;i++)
    cin>>p[i];
}
void array::show()
{
  cout<<"Elements are: ";
  for(int i=0;i<size;i++)
    cout<<p[i];
}
void array::destroy()
{ 
  delete p;
}
void main()
{
  array a1;
  int count;
  clrscr();
  cout<<"Enter the size of the array:";
  cin>>count;
  a1.getsize(count);
  a1.read();
  a1.show();
  a1.delete();
  getch();
}