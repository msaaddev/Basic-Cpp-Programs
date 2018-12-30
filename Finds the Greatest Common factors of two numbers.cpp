#include <iostream>
using namespace std;
int main()
{
	int a, b,c, d;
		cout << "enter 1st number=";
		cin >> a;
		cout << "enter 2nd number=";
		cin >> b;
			while (b!=0)
				{
					c=b;
					b=a%b;
					a=c;
				}
		cout << "GCD of two numbers=" << a;
		return 0;
}
