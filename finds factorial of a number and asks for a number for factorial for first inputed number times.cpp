#include <iostream>
#include <cmath>
using namespace std;
int fact(int n)
{
	int a=1;
	int i=1;
	while (i<=n)
	{
		a=a*i;
		i++;
	}
	
	return a;
}
int main()

{
	
	int a[5];
	int i=0, x,y;
		while (i<=4)
			{
				cout << "Enter a number: ";
				cin >> a[i];
				
				y=fact(a[i]);
				cout << "Factorial:" << y << endl;
				i++;
			}
					
	return 0;
}
