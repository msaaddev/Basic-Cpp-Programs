#include <iostream>
using namespace std;
int main()
{
	int a, maximum, second_maximum, m;
		cout << "Enter a number=";
		cin >> a;
		if (a<0)
			{
					
			}
		else 
			{
			maximum=a;
			while (m=-1)
			{
			cout << "enter numbers=";
			cin >> m;
			if (m>=0)
			{
			if (m>maximum);
			{
			second_maximum=maximum;
			maximum=m;
			}
			}
			else
			{
			if (m<second_maximum)
			{
			second_maximum=m;
			}
			}
			}			
			}
			cout << "The second highest number=" << second_maximum;
		return 0;
}
