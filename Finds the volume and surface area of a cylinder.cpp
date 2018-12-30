#include <iostream>
#include <cmath>
#include <iomanip>
const double PI = 3.14159;
using namespace std;
int main()
{
	double height, radius;
	
		cout << "Enter the height of the cylinder: ";
		cin >> height;
		cout << endl;
		cout << "Enter the radius of the base of the cylinder: ";
		cin >> radius;
	
			cout << fixed << showpoint << setprecision(2);
			cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)* height << endl;
			cout << "Surface area: "<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
			
	return 0;
}

