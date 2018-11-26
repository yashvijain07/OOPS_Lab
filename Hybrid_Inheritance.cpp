#include<iostream>
#include<conio.h>
using namespace std;

class publication
{
	char title[20];
	int price;
	public:
		void read()
		{
			cout<<"entre your title"<<endl;
			cin>>title;
			cout<<"enter your price"<<endl;
			cin>>price;
		}
		void show()
		{
			cout<<" title is : "<<title<<endl;
			cout<<"price is :" <<price<<endl;
		}
};
class pamplet:public publication
{
	public:
		void read1()
		{
			read();
		}
		void show1()
		{
			show();
		}   
};
class distributer:public pamplet
{
	char type[20];
	public:
	void read2()
	{
		read1();
		cout<<"enter type of distributer"<<endl;
		cin>>type;
	}
	void show2()
	{
		show1();
		cout<<"distributer type is  :  "<<type<<endl;
	}
};
class books:public publication
{
	int page;
	char name[20];
	public:
		void read1()
		{
			read();
			cout<<"enter your page"<<endl;
			cin>>page;
			cout<<"enter your book name"<<endl;
			cin>>name;
		}
		void show1()
		{
			 show();
			cout<<"book pages is  :  "<<page<<endl;
			cout<<"book name is  :"<<name<<endl;
		}
};
class sale
{
	float publish_sale[3];
	public:
		void data();
		void outdata();
};
void sale::data()
{
	for(int i=0;i<3;i++)
	{
		cin>>publish_sale[i];
	}
}
void sale::outdata()
{
	int total_sale=0;
	for(int i=0;i<3;i++)
	{
		cout<<"publish sale is"<<publish_sale[i]<<endl;
		total_sale+=publish_sale[i];
	}
	cout<<"total_sale is"<<total_sale; 
}

class tape:public publication,public sale
{
	int time;
	public:
		void read1()
		{
			read();
			 data();
			cout<<"enter your play time"<<endl;
			cin>>time;
		}
		void show1()
		{
			show();
			void outdata();
			cout<<"your play time is"<<time<<endl;
		}
};
int main()
{
	 int c;
	char ch;
	do{
	
	cout<<"ENTER YOUR CHOICE  1=distributetr 2=books  3=tape"<<endl;
	cin>>ch;
	
	
	switch(ch)
	{
		case '1' : distributer g;				   
				   g.read2();
				   g.show2();
				   break;
		case '2' : books g1;
				   g1.read1();
				   g1.show1();
				   break;
		case '3' : tape p;
				   p.read1();
				   p.show1();
				   break;
		default  : cout<<"please enter valid number"<<endl;
				   break;
    }
    cout<<"IF YOU ARE EXIT PLEASE ENTER N  :  "<<endl;
    c=getche();
    cout<<endl;
    }while(c!='N');
    
}

		
