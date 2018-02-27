#include<bits/stdc++.h>

using namespace std;

class point
{
	protected:
    	float a, b;
	public:
	    point(float x, float y)
    	{
	        a = x;
	        b = y;
	    }
	    point()
	    {
	        a = 0;
	        b = 0;
	    }
	    void display()
	    {
	        cout<<"a = "<<a<<endl;
	        cout<<"b = "<<b<<endl;
	    }
	    friend point operator + (point &a1, point &a2);
	    friend point operator - (point &a1, point &a2);
	    friend point operator * (point &a1, point &a2);
	    friend point operator / (point &a1, point &a2);
};

point operator + (point &a1, point &a2)
{
    point a3;
    a3.a = a1.a + a2.a;
    a3.b = a1.b + a2.b;
    return a3;
}

point operator - (point &a1, point &a2)
{
    point a3;
    a3.a = a1.a - a2.a;
    a3.b = a1.b - a2.b;
    return a3;
}

point operator * (point &a1, point &a2)
{
    point a3;
    a3.a = a1.a * a2.a;
    a3.b = a1.b * a2.b;
    return a3;
}

point operator / (point &a1, point &a2)
{
    point a3;
    a3.a = a1.a / a2.a;
    a3.b = a1.b / a2.b;
    return a3;
}

int main()
{
    point a1(2, 3);
    point a2(4, 5);
    point a3 = a1 + a2, a4 = a1 - a2, a5 = a1 * a2, a6 = a1 / a2;
    a3.display();
    a4.display();
    a5.display();
    a6.display();
    return 0;
}
