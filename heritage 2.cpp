#include<iostream>
#include<string.h>
using namespace std;
class animal
{
	public:
		int age;
		char name[100];
		void set_value()
		{
			cout<<"enter the age of zebra:"<<endl;
			cin>>age;
			cout<<"enter the age of dolphin:"<<endl;
			cin>>age;
			cout<<"enter the name of zebra:"<<endl;
			cin>>name;
			cout<<"enter the name of dolphin:"<<endl;
			cin>>name;
			
		}
};
class zebra:public animal
{
	public:
		void xyz()
		{
		   cout<<"the zebra age is:"<<age<<endl<<"the zebra name is:"<<name<<endl;	
		}
};
class dolphin:public animal
{
	public :
		void abc()
		{
			cout<<"the dolphin age is:"<<age<<endl<<"the dolphin name is:"<<name<<endl;
		}
};
int main()
{
	zebra a1;
	dolphin d1;
	a1.set_value();
	a1.xyz();
	d1.set_value();
	d1.abc();
}
