#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  string line, item_name, item_code;
  int item_price;
  fstream f;
  f.open("Invoice.txt", ios::out);
  while (t--)
  {
    cin>>item_name;
    cin>>item_code;
    cin>>item_price;
    f<<item_name;
    f<<", ";
    f<<item_code;
    f<<", ";
    f<<item_price<<endl;
  }
  f.close();
  cout<<"Written successfully! Now reading:"<<endl;
  f.open("Invoice.txt", ios::in);
  if (f.is_open())
    while (getline(f, line))
      cout<<line<<endl;
  else
    cout<<"File not found!"<<endl;
  return 0;
}
