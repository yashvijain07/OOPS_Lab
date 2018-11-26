#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A()
		{
			x=0;
		}
		A(int x1)
		{
			x=x1;
		}
		void getdata()
		{
			cout<<"enter a no : ";
			cin>>x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
class B:public A
{
	int y;
	public:
		B():A()
		{
			y=0;
		}
		B(int x1,int y1):A(x1)
		{
			y=y1;
		}
		void getdata()
		{
			cout<<"enter a no : ";
			cin>>y;
		}
		void display()
		{
			cout<<y<<endl;
		}
};
class C:public B
{
	int z;
	public:
		C():B()
		{
			z=0;
		}
		C(int x1,int y1,int z1):B(x1,y1)
		{
		  	z=z1;
		}
		void getdata()
		{
			A::getdata();
			B::getdata(); 
			cout<<"enter a no : ";
			cin>>z;
		}
		void display()
		{
			A::display();
			B::display();
			cout<<z<<endl;
		}
};
int main()
{
	C c1;
	c1.getdata();
	c1.display();
   	C c2(10,20,30);
	c2.display();
}
