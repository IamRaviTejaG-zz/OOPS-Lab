#include<bits/stdc++.h>

using namespace std;

class Test
{
	public:
	    int x, y;
	    Test(int a, int b)
	    {
	        x = a;
			y = b;
	    }
	    int operator == (Test ob)
	    {
	        if(x == ob.x && y == ob.y)
	            return 1;
	        else
	            return 0;
	    }
};

int main()
{
    Test ob1(1, 2);
    Test ob2(3, 4);
    if(ob1 == ob2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;
    return 0;
}
