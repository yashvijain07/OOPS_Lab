#include<iostream.h>
#include<conio.h>
class boy
{   
    int income1, income2;
  public:
    void setdata(int in1, int in2)
    {
      income1 = in1;
      income2 = in2;
    }
    friend class girl;
};
class girl
{   
    int income;
  public:
    int girlfun(boy b1)
    {
      return b1.income1 + b2.income2;
    }
    void setdata(int in)
    {
      income = in;
    }
    void show()
    {
      boy b1;
      b1.setdata(100,200);
      cout<<"Boy's income"<<b1.income1;
      cout<<"Girl's income"<<income;
    }
};
void main()
{
  clrscr();
  boy b1;
  girl g1;
  b1.setdata(500,1000);
  g1.setdata(300);
  cout<<"b1 total income"<<g1.girlfun(b1);
  g1.show();
  getch();
}