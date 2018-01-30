#include<bits/stdc++.h>

using namespace std;

class Triangle
{
	protected:
		double a, b, c;
	public:
		Triangle(double x, double y, double z)
		{
			a = x;
			b = y;
			c = z;
		}
		void rightTriArea(double x, double y)
		{
			double area = 0.5*x*y;
			cout<<"Area of the right angled triangle is: "<<area<<" sq. units."<<endl;
		}
		void triArea(double x, double y, double z)
		{
			double s = (x+y+z)/2;
			double area = sqrt(s * (s-a) * (s-b) * (s-c));
			cout<<"Area of the triangle is: "<<area<<" sq. units."<<endl;
		}		
		void check_and_display()
		{
			if ((a*a + b*b) == c*c)
				rightTriArea(a, b);
			else
				triArea(a, b, c);
		}
};

int main()
{
	double a, b, c;
	vector <double> v;
	cout<<"Enter the sides of the triangle: ";
	cin>>a>>b>>c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	Triangle t(v[0], v[1], v[2]);
	t.check_and_display();
	return 0;
}
