#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	ifstream football;
	
		football.open("data.txt");
		
			double price_1, price_2, price_3, price_4, sold_1, sold_2, sold_3, sold_4;
		
				football >> price_1;
				football >> sold_1;
				football >> price_2;
				football >> sold_2;
				football >> price_3;
				football >> sold_3;
				football >> price_4;
				football >> sold_4;
			
		football.close();
		
		cout << fixed << setprecision(2);
		cout << "Total number of tickets sold: " << sold_1+sold_2+sold_3+sold_4 << endl << endl;
		cout << "Total sale amount: " << (price_1*sold_1)+(price_2*sold_2)+(price_3*sold_3)+(price_4*sold_4);
			
	return 0;
}
