#include<bits/stdc++.h>

using namespace std;

class point
{
	protected:
	    int y;
	public:
	    point(int a)
	    {
	        y = a;
	    }
	    friend int operator - (int c, point ob);
	    friend int operator - (point ob, int c);
};

int operator - (int c, point ob)
{
    int t;
    t = c - ob.y;
    return t;
}

int operator - (point ob, int c)
{
    int t;
    t = ob.y - c;
    return t;
}

int main()
{
    point p(10);
    int k = 3, z;
    z = k - p;
    cout<<"z = "<<z<<endl;
    z = p - k;
    cout<<"z = "<<z<<endl;
    return 0;
}
