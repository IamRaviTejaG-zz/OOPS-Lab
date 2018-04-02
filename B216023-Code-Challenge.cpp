#include<bits/stdc++.h>

using namespace std;

class Employee
{
  public:
    static int count_emp;
    string emp_name;
    Employee()
    {
      count_emp++;
    }
    virtual void get_data(int i)
    {}
    virtual void put_data()
    {}
};

class Manager:public Employee
{
  public:
    const int class_id = 1;
    int inst_count, no_of_projects;
    void get_data(int i)
    {
      inst_count = i;
      cin>>emp_name;
      cin>>no_of_projects;
    }
    void put_data()
    {
      cout<<class_id<<" ";
      cout<<emp_name<<" ";
      cout<<inst_count<<" ";
      cout<<no_of_projects<<endl;
    }
};

class Supervisor:public Employee
{
  public:
    const int class_id = 2;
    int inst_count, field_of_expertise;
    void get_data(int i)
    {
      inst_count = i;
      cin>>emp_name;
      cin>>field_of_expertise;
      while (field_of_expertise!=22 && field_of_expertise!=33 && field_of_expertise!=44)
      {
        cout<<"Invalid entry for variable: field_of_expertise. Enter again: ";
        cin>>field_of_expertise;
      }
    }
    void put_data()
    {
      cout<<class_id<<" ";
      cout<<emp_name<<" ";
      cout<<inst_count<<" ";
      cout<<field_of_expertise<<endl;
    }
};

class Technician:public Employee
{
  public:
    const int class_id = 3;
    int inst_count, trade, jobs_completed_in_a_day[5], sum=0;
    float avg_jobs_completed_in_a_week;
    void get_data(int i)
    {
      inst_count = i;
      cin>>emp_name;
      cin>>trade;
      while (trade!=77 && trade!=88 && trade!=99)
      {
        cout<<"Invalid entry for variable: trade. Enter again: ";
        cin>>trade;
      }
      for(int i=0; i<5; i++)
      {
        cin>>jobs_completed_in_a_day[i];
        sum += jobs_completed_in_a_day[i];
      }
      avg_jobs_completed_in_a_week = sum/5.0;
    }
    void put_data()
    {
      cout<<class_id<<" ";
      cout<<emp_name<<" ";
      cout<<inst_count<<" ";
      cout<<trade<<" ";
      cout<<avg_jobs_completed_in_a_week<<endl;
    }
};

int Employee::count_emp=0;

int main()
{
  int t;
  cin>>t;
  Employee *e[t];
  int count1=0, count2=0, count3=0;
  for (int i=0; i<t; i++)
  {
    int emp_stat;
    cin>>emp_stat;
    if (emp_stat == 1)
    {
      ++count1;
      e[i] = new Manager;
      e[i]->get_data(count1);
    }
    else if (emp_stat == 2)
    {
      ++count2;
      e[i] = new Supervisor;
      e[i]->get_data(count2);
    }
    else if (emp_stat == 3)
    {
      ++count3;
      e[i] = new Technician;
      e[i]->get_data(count3);
    }
    else
    {
      cout<<"Invalid Choice!"<<endl;
    }
  }
  system("cls");
  cout<<t<<endl;
  for (int i=0; i<t; i++)
    e[i]->put_data();
  return 0;
}
