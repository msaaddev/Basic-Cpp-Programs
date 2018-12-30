#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	double weight, pound;
	
		cout << "Enter the weight of the person in Kg: ";
		cin >> weight;
		cout << endl << endl;
			pound=weight*2.2;
			
			cout << fixed << setprecision(2);
			
			cout << "Weight in Kg: " << weight<< endl;
			cout << "Weight in pound: " << pound;
			
	return 0;
}
