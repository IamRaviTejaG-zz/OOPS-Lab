#include<bits/stdc++.h>

using namespace std;

class final;

class Base
{
	private:
		Base()
		{
			cout<<"Base Class Private Constructor being called!"<<endl;
		}
	public:
		int x;
};

class Derived:Base
{
	public:
		int k;
		//Compiler error at this statement since base constructer is private
		Derived():Base()
		{
			cout<<"Derived Class Constructor being called!"<<endl;
		}
};

int main()
{
	Derived d;
	return 0;
}
