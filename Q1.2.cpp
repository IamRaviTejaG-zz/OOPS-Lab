#include<bits/stdc++.h>

using namespace std;

class Triangle
{
	protected:
		float a, b, c;
	public:
		Triangle (float x, float y, float z)
		{
			a = x;
			b = y;
			c = z;
		}
		float area()
		{
			float d = (a+b+c)/2;
			float e = (d * (d-a) * (d-b) * (d-c));
			return sqrt(e);
		}
};

int main()
{
	float a, b, c;
	cout<<"Enter side lengths': ";
	cin>>a>>b>>c;
	Triangle t(a, b, c);
	cout<<"Area of the triangle is "<<t.area()<<" sq. units."<<endl;
	return 0;
}
