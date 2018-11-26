#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
	char name[20];
	int wheels;
	public:
		void read()
		{
			cout<<"ENTER YOUR VEHICLE"<<":"<<"\t";
			cin>>name;
			cout<<"ENTRE NO OF WHEELS"<<":"<<"\t";
			cin>>wheels;
		}
		void show()
		{
			cout<<"VEHICLE IS"<<":"<<"\t"<<name<<endl;
			cout<<"NO OF WHEELS"<<":"<<"\t"<<wheels<<endl;
		}
};
class light_motor:public vehicle
{
	float speed;
	public:
		void read1()
		{
			read();
		    cout<<"ENTER SPEED IN KM/H "<<":"<<"\t";
			cin>>speed;
		}
		void show1()
		{  
			show();	
			cout<<"SPEED IS"<<":"<<"\t"<<speed<<"KM/H"<<endl;
		}
};
class gear:public light_motor
{
	int gr;
	public:
		void read2()
		{
			read1();
			cout<<"ENTER YOUR GEAR"<<":"<<"\t";
			cin>>gr;
		}
		void show2()
		{
			show1();
			cout<<"GEAR IS"<<":"<<"\t"<<gr<<endl;
		}
};
class gearless:public light_motor
{
	
	public:
		void read2()
		{
			read1();
		}
		void show2()
		{
			show1();
		}
};
class heavy:public vehicle
{
	char PER[20];
	public:
		void read1()
		{
			read();
		    cout<<"ENTER PERMIT TYPE "<<":"<<"\t";
			cin>>PER;
		}
		void show1()
		{  
			show();	
			cout<<"PERMIT TYPE IS"<<":"<<"\t"<<PER<<endl;
		}
};

class passenger:public heavy
{
	
	public:
		void read2()
		{
			read1();
			
			
		}
		void show2()
		{
			show1();
		}
};
class goods:public heavy
{
	
	public:
		void read2()
		{
		
			read1();
		}
		void show2()
		{
			show1();
		}
};
int main()
{
	 int c;
	char ch;
	do{
	
	cout<<"ENTER YOUR CHOICE  1=GEAR VEHCILE(LIKE BIKE)2=GEARLESS VEHCILE(LIKE CYCLE)  3=PASSENGER VEHCILE(LIKE BUS) 4=GOODS(LIKE TRUCK)"<<endl;
	cin>>ch;
	
	
	switch(ch)
	{
		case '1' : gear g;
				   
				   g.read2();
				   g.show2();
				   break;
		case '2' : gearless g1;
				   g1.read2();
				   g1.show2();
				   break;
		case '3' : passenger p;
				   cout<<"AVAILABLE SEATS IS 16"<<endl;
				   cout<<"LOAD CAPACITY IS 1 TON"<<endl;
				   p.read2();
				   p.show2();
				   break;
		case '4' : goods gs;
		           gs.read2();
		           gs.show2();
				   break;
		default  : cout<<"please enter valid number"<<endl;
				   break;
    }
    cout<<"IF YOU ARE EXIT PLEASE ENTER N  :  "<<endl;
    c=getche();
    cout<<endl;
    }while(c!='N');
    
}



