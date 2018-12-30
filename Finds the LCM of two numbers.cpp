#include <iostream>
using namespace std;
int main()
{
	int a, b,c, d;
		cout << "enter 1st number=";
		cin >> a;
		cout << "enter 2nd number";
		cin >> b;
			d=a*b;
			while (a%b!=0)
				{
					c=b;
					b=a%b;
					a=c;
				}
		cout << "LCM of two numbers=" << d/b;
		return 0;
}
