#include<bits/stdc++.h>

using namespace std;

class Container
{
	public:
		double vol;
		virtual void volume() = 0;
};

class Sphere:public Container
{
	public:
		double r;
		Sphere()
		{
			cout<<"Enter radius of the sphere: ";
			cin>>r;
		}
		void volume()
		{
			vol = 1.33*3.14*r*r*r;
			cout<<"Volume of the sphere is: "<<vol<<" units cube."<<endl;
		}
};

class Cube:public Container
{
	public:
		double s;
		Cube()
		{
			cout<<"Enter side length of the cube: ";
			cin>>s;
		}
		void volume()
		{
			vol = s*s*s;
			cout<<"Volume of the cube is: "<<vol<<" units cube."<<endl;
		}
};

int main()
{
	Container *c;
	Sphere s;
	c = &s;
	c->volume();
	Cube t;
	c = &t;
	c->volume();
	return 0;	
}
