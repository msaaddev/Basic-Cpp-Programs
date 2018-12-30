#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
		cout << "Enter the value of a=";
			cin	>> a;
		cout << "Enter the value of b=";
			cin >> b;
		cout << "Enter the value of c=";
			cin >> c;
				float d, x, y, e, f;
					d=b*b-4*a*c;
						if(d>0)
							{
								cout << "Roots are real";
								e=pow(b*b-4*a*c, 0.5);
								x=-b+e/2*a;
								y=-b-e/2*a;
								cout << "Value of 1st root=" << x;
								cout << "Value of 2nd root=" << y;
							}
						else
						{
							cout << "Roots are imaginary";
						}		
  return 0;
}
