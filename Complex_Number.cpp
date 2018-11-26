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
};
void main()
{
  complex c1;
  clrscr();
  c1.read();
  c1.show();
  getch();
}