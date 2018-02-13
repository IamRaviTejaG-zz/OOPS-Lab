#include<bits/stdc++.h>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"Base Constructor"<<endl;
		}		
		virtual void vir_demo()
		{
			cout<<"Base Class Virtual Function"<<endl;
		}
};

class Pseudo:public Base
{
	public:
		Pseudo()
		{
		cout<<"Pseudo Class Constructor"<<endl;
		}
		virtual void vir_demo()
		{
			cout<<"Pseudo Class Virtual Function"<<endl;
		}
};

class Derived:public Pseudo
{
	public:
		Derived()
		{
			cout<<"Derived Class Constructor"<<endl;
		}
		void vir_demo()
		{
			cout<<"Derived Class Virtual Function"<<endl;
		}
};

int main()
{
	Base *b;
	Pseudo p;
	b = &p;
	b->vir_demo();
	Derived d;
	b = &d;
	b->vir_demo();
	Pseudo *k;
	k = &d;
	k->vir_demo();
	return 0;
}
