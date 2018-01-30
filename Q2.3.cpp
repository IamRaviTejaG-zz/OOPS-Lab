#include<bits/stdc++.h>

using namespace std;

class Count
{
	static int counter;
	public:
		Count()
		{
			counter++;
			system("cls");
			cout<<"Number of objects: "<<counter<<endl;
		}
};

int Count::counter;

int main()
{
	Count c[33], d, e, f;
	return 0;
}
