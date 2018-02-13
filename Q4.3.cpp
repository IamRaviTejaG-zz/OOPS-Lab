#include<bits/stdc++.h>

using namespace std;

class Base
{
	int x;
	public:
		Base(int x = 30)
		{
			this->x = x;
		}
		virtual void show()
		{
			cout<<"X of Base  = "<<x<<endl;
		}
};

class Derived:public Base
{
	int x;
	public:
		Derived(int x = 50)
		{
			this->x = x;
		}
		void show()
		{
			cout<<"X of Derived = "<<x<<endl;
		}
};

void Disp(Base &b)
{
	b.show();
}

int main()
{
	Derived d;
	Disp(d);
	Base b;
	Disp(b);
	return 0;
}
