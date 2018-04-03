#include<bits/stdc++.h>

using namespace std;

void create_file(string filename, string randomstuff)
{
  fstream f;
  f.open(filename.c_str(), ios::out|ios::binary);
  cout<<filename<<": created successfully!"<<endl;
  f<<randomstuff;
  cout<<filename<<": Data written into file successfully!"<<endl;
  f.close();
}

void change_char(string filename)
{
  string line, r, s;
  fstream f;
  f.open(filename.c_str(), ios::in|ios::binary);
  while(getline(f, line))
    s = line;
  f.close();
  r = s;
  s[19] = 'Z';
  f.open(filename.c_str(), ios::out|ios::binary);
  f<<s;
  f.close();
  cout<<filename<<": Replaced the 20th character!"<<endl;
  cout<<"Original string: "<<r<<endl;
  cout<<"Replaced string: "<<s<<endl;
}

int main()
{
  string filename, randomstuff;
  cout<<"Enter file name (along with extension): ";
  cin>>filename;
  cout<<"Enter random stuff to be entered into file: ";
  cin>>randomstuff;
  while (randomstuff.length() < 30)
  {
    cout<<"Random stuff length less than 30. Reenter: ";
    cin>>randomstuff;
  }
  create_file(filename, randomstuff);
  change_char(filename);
  return 0;
}
