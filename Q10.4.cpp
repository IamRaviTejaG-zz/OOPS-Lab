#include<bits/stdc++.h>

using namespace std;

class book
{
  public:
    char book_name[30];
    int id,year;
    void getdata()
    {
        getchar();
        cout<<"Enter the name :";
        cin.getline(book_name,30);
        cout<<"Enter the ID :";
        cin>>id;
        cout<<"Enter the Year of publication :";
        cin>> year;
        cout<<endl;
    }
    void showdata()
    {
        cout<<book_name<<" "<<id<<" "<<year<<endl;

    }
};

int main()
{
  int n;
  book b;
  ofstream out("Book details");
  flag:
      cout<<"Enter the number of books :";
      cin>>n;
      if(n<2)
      {
          cout<<"Details of at least 5 books should be entered"<<endl;
          goto flag;
      }
      for(int i=1;i<=n;i++)
      {
          cout<<"\nEnter the details of the book:"<<" "<<i<<endl;
          b.getdata();
          out.write((char*)&b,sizeof(b));
      }
      out.close();
      ifstream in("Book details");
      cout<<"The Details of books :"<<endl;
      for(int i=1;i<=n;i++)
      {
          in.read((char*)&b,sizeof(b));
          cout<<"book"<<" "<<i<<endl;
          b.showdata();
      }
      in.close();
      return 0;
}
