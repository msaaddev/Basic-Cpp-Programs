#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sum=0, sum1=0, rem, num;
	string number;
	
		cout << "Enter a binary number: ";
		cin >> num;
		number = num;
		
			while(num!=0){
				
				rem = num % 10;
				
					if(rem==1){
						sum = sum + 1;	
					}
					else{
						sum1 = sum1 + 1;
					}
				
				num = (num - rem) / 10;	
								
			}
			
		if(sum % 2 == 0){
			cout << "true";
		}
		else{
			cout << "false";
		}
}
