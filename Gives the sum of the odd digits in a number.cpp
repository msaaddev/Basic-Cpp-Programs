#include <iostream>
using namespace std;
int main()
{
	int x, n, a, result, remainder;
		cout << "Enter a number=";
		cin >> x;
			a=x;
			result=0;
			n=0;
			while (a==0)
				{
					n=a%10;
					remainder=n%2;
						if (remainder==0)
							{
							}
						else
						{
							result=result + n;
						}
					a=(a-n)/10;
				}
			cout << "The sum of odd digits=" << result;
			
}
