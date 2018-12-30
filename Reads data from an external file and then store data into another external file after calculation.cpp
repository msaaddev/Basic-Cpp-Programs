#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	ifstream inFile;
	
	ofstream outFile;
	
		inFile.open("inData.txt");
		
			double length, width, radius, balance, interest;
			string first_name, last_name;
			int age;
			char letter;
				
				inFile >> length;
				inFile >> width;
				inFile >> radius;
				inFile >> first_name;
				inFile >> last_name;
				inFile >> age;
				inFile >> balance;
				inFile >> interest;
				inFile >> letter;
				
		inFile.close();
		
		outFile.open("outData.txt");
		
			outFile << "Rectangle: "<< endl;
			outFile << "Length=" << length << ", width=" << width << ", area=" << length*width << ", perimeter=" << 2*(length+width) << endl;
			outFile << "Circle: " << endl;
			outFile << "Radius=" << radius << ", area=" << 3.14*radius*radius << ", circumference=" << 2*3.14*radius << endl;
			
				double x, y, z, new_balance;
				
				x=balance/100.0;
				y= x * interest;
				z= y/12.0;
				new_balance=balance+z;
				
			outFile << "Name: " << first_name << " " << last_name << ", age: " << age << endl;
			outFile << "Beginning balance=" << balance << ", interest rate=" << interest << endl;
			outFile << "Balance at the end of the month=" << new_balance << endl;
			outFile << "The character that comes after " << letter << " in the ASCII set is B";
			
		outFile.close();
		
	return 0;		
}
