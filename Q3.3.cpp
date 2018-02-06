#include<bits/stdc++.h>

using namespace std;

class Staff
{
	protected:
		string id, phone;
	public:
		Staff()
		{
			cout<<"ID: ";
			cin>>id;
			cout<<"Phone: ";
			cin>>phone;
		}
};

class Teacher:public Staff
{
	protected:
		float exp;
	public:
		Teacher():Staff()
		{
			cout<<"Years Of Experience: ";
			cin>>exp;
		}
	
};

class Officer:public Staff
{
	protected:
		string grade;
	public:
		Officer():Staff()
		{
			cout<<"Grade: "<<endl;
			cin>>grade;
		}	
};

class Regular:public Teacher
{
	protected:
		float basic_pay, DA, HRA, gross;
	public:
		Regular(float i):Teacher()
		{
			basic_pay = i;
			DA = 1.5 * basic_pay;
			HRA = 0.2 * basic_pay;
			gross = basic_pay + DA + HRA;
			display();
		}
		void display()
		{
			cout<<"\n\nID = "<<id<<endl;
			cout<<"Phone Number = "<<phone<<endl;
			cout<<"Years Of Experience = "<<exp<<endl;
			cout<<"Basic Pay = "<<basic_pay<<endl;
			cout<<"DA = "<<DA<<endl;
			cout<<"HRA = "<<HRA<<endl;
			cout<<"Gross = "<<gross<<endl;
		}
};

class Contract:public Teacher
{
	protected:
		string con_pay, cont_dur;
	public:
		Contract():Teacher()
		{
			cout<<"Constructor Contract called!"<<endl;
		}
};

int main()
{
	Regular k(75000);
	return 0;
}
