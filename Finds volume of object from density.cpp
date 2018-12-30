#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	double mass, density, volume;
	
		cout << "Enter the mass in grams: ";
		cin >> mass;
		
		cout << "Enter the density in grams per cubic centimeters: ";
		cin >> density;
		
			volume = mass / density;
			
			cout << fixed << setprecision(2);
			cout << "Volume of the object: " << volume;
}
