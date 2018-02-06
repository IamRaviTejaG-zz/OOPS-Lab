#include<bits/stdc++.h>

using namespace std;

class Base1
{
	public:
		int k;
		Base1(int i)
		{
			k = i;
		}
};

class Base2
{
	public:
		int a,b,c;
		Base2(int p, int q, int r)
		{
			a = p;
			b = q;
			c = r;
		}
};

class Derived:public Base1, public Base2
{
	public:
		Derived(int x, int y, int z, int i):Base1(x), Base2(y, z, i)
		{	
			display();
		}
		void display()
		{
			cout<<"Base1::k = "<<k<<endl;
			cout<<"Base2::a = "<<a<<endl;
			cout<<"Base2::b = "<<b<<endl;
			cout<<"Base2::c = "<<c<<endl;
		}
};

int main()
{
	Derived x(100, 200, 300, 400);
	return 0;
}
