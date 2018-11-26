#include<iostream.h>
#include<conio.h>
void swap(int &a, int &b)
{
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"\nSwapped Numbers are:\n";
  cout<<a<<"\n"<<b;
}
void swap(float &s, float &t)
{
  float temp;
  temp=s;
  s=t;
  t=temp;
  cout<<"\nSwapped Numbers are:\n";
  cout<<s<<"\n"<<t;
}
void main()
{
  int p, q;
  clrscr();
  cout<<"\nEnter int numbers:\n";
  cin>>p>>q;
  swap(p,q);
  float x,y;
  cout<<"\nEnter float numbers:\n";
  cin>>x>>y;
  swap(x,y);
  getch();
}