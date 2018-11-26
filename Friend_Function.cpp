#include<iostream.h>
#include<conio.h>
class second;
class first
{   
    int x;
  public:
    void read()
    {
      cout<<"Enter first number:";
      cin>>x;
    }
    friend void max(first,second);
};
class second
{   
    int y;
  public:
    void read()
    {
      cout<<"Enter second number:";
      cin>>y;
    }
    friend void max(first,second);
};
void max(first f1,second s1)
{
  int x,y;
  if(f1.x > s1.y)
    cout<<"\n"<<f1.x<<"is max";
  else
    cout<<"\n"<<s1.y<<"is max";
}
void main()
{
  clrscr();
  first obj1;
  second obj2;
  obj1.read();
  obj2.read();
  max(obj1, obj2);
  getch();
}