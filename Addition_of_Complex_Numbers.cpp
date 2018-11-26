#include<iostream.h>
#include<conio.h>
#include<math.h>
class complex
{   
    int real, imag;
  public:
    void read()
    {
      cout<<"\nEnter real part: "; 
      cin>>real; 
      cout<<"\nEnter imaginary part: "; 
      cin>>imag; 
    }
    void show()
    {
      cout<<"Complex No. is: ";
      cout<<real;
      if(imag<0)
        cout<<"-i";
      else
        cout<<"+i"
      cout<<abs(imag);
    }
    void add( complex c1, complex c2 )
    {
      real = c1.real + c2.real;
      imag = c1.imag + c2.imag;
    }
};
void main()
{
  complex c1, c2, c3;
  clrscr();
  c1.read();
  c1.show();
  c2.read();
  c2.show();
  cout<<"\n\nAfter addition"
  c3.add(c1, c2);
  c3.show();
  getch();
}