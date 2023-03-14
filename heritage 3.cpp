#include<iostream>
#include<string.h>
using namespace std;
class read
{
	public:
		int id;
		char name[100];
		int salary;
		void set()
		{
			cout<<"enter the id of emp:"<<endl;
			cin>>id;
			cout<<"enter the name of emp:"<<endl;
			cin>>name;
			cout<<"enter the salary of emp:"<<endl;
			cin>>salary;
			
		}
};
class print
{
	public:
		int experience;
		char role[100];
		void set1()
		{
		   cout<<"enter the	experience of emp:"<<endl;
		   cin>>experience;
		   cout<<"enter the	role of emp:"<<endl;
		   cin>>role;
		}
};
class emp: public read, public print
{
	public:
		char add[100];
		char email[100];
		void set2()
		{
			cout<<"enter the address of emp:"<<endl;
			cin>>add;
			cout<<"enter the email of emp:"<<endl;
			cin>>email;
			cout<<"id:"<<id<<endl<<"name:"<<name<<endl<<"salary:"<<salary<<endl<<"experience:"<<experience<<endl<<"role:"<<role<<endl<<"add:"<<add<<endl<<"email:"<<email<<endl;
			
			
		}
};
int main()
{
	emp e1;
	e1.set();
	e1.set1();
	e1.set2();
	return 0;
}
