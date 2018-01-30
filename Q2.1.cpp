#include<bits/stdc++.h>

using namespace std;

class Shape
{
	 double a, b;
	 public:
	 	void area(double x, double y)
	 	{
	 		a = x;
	 		b = y;
	 		if (a == b)
	 			cout<<"Area of the square is: "<<(a*b)<<" sq. units."<<endl;
	 		else
	 			cout<<"Area of the rectangle is: "<<(a*b)<<" sq. units."<<endl;
	 	}
};

int main()
{
	double a, b;
	cout<<"Enter lengths of sides: ";
	cin>>a>>b;
	Shape s;
	s.area(a, b);
	return 0;
}
