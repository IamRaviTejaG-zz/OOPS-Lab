#include<bits/stdc++.h>

using namespace std;

class Point
{
    	int arr[3];
	public:
	    Point(int a,  int b, int c)
	    {
	        arr[0] = a;
	        arr[1] = b;
	        arr[2] = c;
	    }
	    int operator [] (int k)
	    {
	        if(k < 0 || k > 2)
	        {
	            cout<<"Array index out of bounds!"<<endl;
	            exit(0);
	        }
	        else
	            return arr[k];
	    }
};

int main()
{
    Point p(4,5,6);
    for (int i=0; i<4; i++)
    	cout<<p[i]<<endl;
	return 0;
}
