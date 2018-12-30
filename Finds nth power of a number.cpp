#include <iostream>
using namespace std;
int main()
{
	int number, a, i=1, b;
	
		cout << "Enter a number: ";		
		cin >> number;					
			
			a=number;
			b = number - 1;
				
				while(i <= b){			// 	
					
					if(i == 1){
						number= number * number;
					}
					else{
						number= number * a;
					}
					
					i++;
				
				}
			cout << number;		
}
