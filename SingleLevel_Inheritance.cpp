#include<iostream>
using namespace std;

class student
{
	int age;
	char name[20];
	public:
		void read()
		{
			cout<<"enter student name : ";
			cin>>name;
			cout<<"enter student age : ";
			cin>>age;
		}
		void show()
		{
				cout<<"student name is : "<<name<<endl;
				cout<<"student age is : "<<age<<endl;			
		}
};
class info :public student
{
	char branch[20];
	int rollno;
	public:
		void read()
		{
		student::read();
		cout<<"enter student branch : ";
		cin>>branch;
		cout<<"enter student roll no : ";
		cin>>rollno;
	    }
	    void show()
	    {
	    	student::show();
			cout<<"student branch is : "<<branch<<endl;
			cout<<"student roll no is : "<<rollno<<endl;			
		}
		
};
int main()
{
	class info s;
	s.read();
	s.show();
}
