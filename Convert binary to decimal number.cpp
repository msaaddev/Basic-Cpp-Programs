#include <iostream>
using namespace std;
int main()
{	
	int	x,r,i,dec_number,last_digit, n;
	cout << "enter a binary number=";
	cin >> x;
	n=x;
	i=0;
	while (n==0)
	{
		r=n%10;
		n=(n-r)/10;
		i=i+1;
	}
	i=i-1;
	dec_number=0;
	n=x;
	while(n==0)
		{
			last_digit=n%10;
			n=(n-last_digit)/10;
			dec_number=dec_number+(last_digit*(2^i));
			i=i-1;
		}
	cout << "Decimal number is=" << dec_number;
	return 0;
}

