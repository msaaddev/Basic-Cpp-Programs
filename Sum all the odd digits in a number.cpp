#include <iostream>
using namespace std;
int main()
{
	int a, sum, r;
	cout << "Enter a number=";
	cin >> a;
	sum=0;
		while(a<0)
			{
				r=a%10;
				if(r%2==0)
				{
				}
				else{
					sum=sum+r;
				}
				a=(a-r)/10;
			}
		cout << "Sum of odd digits" << sum;			
	return 0;
			
}
