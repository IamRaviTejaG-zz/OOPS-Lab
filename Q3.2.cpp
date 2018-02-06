#include<bits/stdc++.h>

using namespace std;

class Base
{
	public:
		int x;
};

class Der1:virtual public Base
{
}; 

class Der2:virtual public Base
{	
};

class Derived:public Der1, public Der2
{
	public:
		Derived(int i)
		{
			x = i;
			display();
		}
		void display()
		{
			// Only one instance of "Base" class is added. Hence, no ambiguity.
			cout<<"Base::x = "<<x<<endl;
		}
};

int main()
{
	Derived k(20);
	return 0;
}
