#include<bits/stdc++.h>

using namespace std;

class Employee
{
	string emp_id;
	int emp_salary;
	public:
		Employee(string a, int b)
		{
			emp_id = a;
			emp_salary = b;
		}
		void display()
		{
			cout<<"Employee ID: "<<emp_id<<endl;
			cout<<"Employee Salary: "<<emp_salary<<endl;
		}
};

int main()
{
	string a;
	int b;
	cout<<"Enter employee ID: ";
	cin>>a;
	cout<<"Enter employee salary: ";
	cin>>b;
	Employee e(a, b);
	e.display();
	return 0;
}
