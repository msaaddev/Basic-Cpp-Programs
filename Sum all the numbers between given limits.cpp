#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    	cout << "Enter the first number=";
    		cin >> a;
    	cout << "Enter the Second number=";
    		cin >> b;
    			n=0;
    				while (a<=b)
    				{
    					n=a+n;
    					a=a+1;
					}
			cout << "Sum=" << n;
	return 0;
}
