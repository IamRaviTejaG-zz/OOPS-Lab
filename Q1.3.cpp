#include<bits/stdc++.h>

using namespace std;

class Customers
{
	int ac_number, balance;
	string pan;
	public:
		void ac_num_in()
		{
			cout<<"Enter Customer A/C Number: ";
			cin>>ac_number;
		}
		void balance_in()
		{
			cout<<"Enter A/C Balance: ";
			cin>>balance;
		}
		void pan_in()
		{
			cout<<"Enter Customer PAN Card Number: ";
			cin>>pan;
		}		
		void display()
		{
			cout<<"Customer A/C Number: "<<ac_number<<endl;
			cout<<"A/C Balance: "<<balance<<endl;
			cout<<"PAN Card Number: "<<pan<<endl;
		}
};

int main()
{
	int x;
	cout<<"Enter number of customers: ";
	cin>>x;
	Customers r[x];
	for (int i=0; i<x; i++)
	{
		r[i].ac_num_in();
		r[i].balance_in();
		r[i].pan_in();
		cout<<"Entry Successful!"<<endl;
	}
	cout<<"Displaying Details!"<<endl;
	for (int i=0; i<x; i++)
		r[i].display();
	return 0;
}
