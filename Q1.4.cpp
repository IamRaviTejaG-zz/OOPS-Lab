#include<bits/stdc++.h>

using namespace std;

class Convert
{
	int seconds;
	public:
		void input()
		{
			cout<<"Enter seconds: ";
			cin>>seconds;
		}
		void display()
		{
			int sec = seconds%60;
			int mins = (seconds/60)%60;
			int hrs = seconds/3600;
			cout<<seconds<<" seconds = "<<hrs<<":"<<mins<<":"<<sec<<endl;
		}
};

int main()
{
	Convert s;
	s.input();
	s.display();
	return 0;
}
