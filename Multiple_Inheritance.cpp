#include<iostream>
using namespace std;
class A
{
	char emp_name[40];
	public:
		void read()
		{
			cout<<"enter the employee name : ";
			cin>>emp_name;
		}
		void show()
		{
			cout<<"employee name is  "<<emp_name<<endl; 
		}
};
class B
{
	int id;
	
	public:
		void read()
		{
		
	
		cout<<"enter the employee id : ";
		cin>>id;
    	}
    	void show()
    	{
    		cout<<"employee id is : "<<id<<endl;
		}
		
};
class C
{
	char desgination[40];
	public:
			void read()
			{
				cout<<"enter the employee designation : ";
				cin>>desgination;
			}
	        void show()
			{
			    cout<<"employee desgination is"<<desgination<<endl;
		    }
				
};
class D : public A,public B,public C
{
	public:
		void read()
		{
			A::read();
			B::read();
			C::read();
		}
		void show()
		{
			A::show();
			B::show();
			C::show();
		}
};
int main()
{
	class D e;
	cout<<"enter the details of employee"<<endl;
	e.read();
	e.show();
}

