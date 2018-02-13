#include<bits/stdc++.h>

using namespace std;

class Figure
{
	public:
		double area;
		virtual void show_area() = 0;	
};

class Circle:public Figure
{
	public:
		double r;
		Circle()
		{
			cout<<"Enter Radius: ";
			cin>>r;
		}
		void show_area()
		{
			area = (22 * r * r)/7;
			cout<<"Area Of The Cirlce = "<<area<<endl;
		}
		
};

class Square:public Figure
{
	public:
		double s;
		Square()
		{
			cout<<"Enter Length Of Side: ";
			cin>>s;
		}
		void show_area()
		{
			area = s*s;
			cout<<"Area Of The Square: "<<area<<endl;	
		}
};

int main()
{
	Circle k;
	Figure *f;
	f = &k;
	f->show_area();
	Square t;
	f = &t;
	f->show_area();
	return 0;
}
