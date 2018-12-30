#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	ifstream data;
	ofstream output_data;
	
		data.open("Ch3_Ex7Data.txt");
		output_data.open("Ch3_Ex7Output.dat");
			
			double salary, increase, up_salary, a, b;
			string first_name, last_name;
				
				for (int i=1; i <=3; i++){
				
					data >> last_name;
					data >> first_name;
					data >> salary;
					data >> increase;
					
							a = salary / 100.0;
							b = a * increase;
							up_salary = salary + b;
		
							output_data << fixed << setprecision(2);				
							output_data << first_name << " " << last_name << " " << up_salary << endl;					
							
				}
		
		output_data.close();
		data.close();
			
	return 0;		
}
