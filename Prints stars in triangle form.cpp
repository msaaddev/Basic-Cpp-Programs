#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number of rows for half triangle: ";
	cin >> a;
		
	for(int x=a; x>0; x--)
		{
			for(int y=0; y<x; y++)
				{
					cout << "* ";
					
				}
			cout << endl;
		}
		
	
	return 0;
}


		
