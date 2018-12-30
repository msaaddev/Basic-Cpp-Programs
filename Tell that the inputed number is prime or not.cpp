#include <iostream>
using namespace std;
int main()
{
	int n, x, y, a;
	cout << "enter a positive number=";
	cin >> n;
	x=2;
	y=0;
	while(x<n/2)
	{
		a=n%2;
		if(a==0)
		{
			y=1;
		}
		x=x+1;
	}
	
	if (y==1)
	{
		cout << "not a prime number";
	}
	else
	{
		cout << "prime number";
	}
	return 0;
}
