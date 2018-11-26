#include<iostream.h>
#include<conio.h>
#include<math.h>
class dates
{   
    int date, month, year;
  public:
    void set(int d, int m, int y);
    void show();
};
void dates::set(int d, int m, int y)
{
  date = d;
  month = m;
  year = y;
}
void dates::show()
{
  cout<<date<<"-"<<month<<"-"<<year;
}
void main()
{
  dates d1, d2, d3;
  clrscr();
  d1.set(30,7,2018);
  d2.set(31,7,2018);
  d3.set(1,8,2018);
  d1.show();
  d2.show();
  d3.show();
  getch();
}