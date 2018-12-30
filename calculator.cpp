#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
	int action, a, b, x;
	float c;
	cout << "Enter a number according to the operations respectively: +, -, /, *, %, ^, square root:";
	cin >> action;
	switch (action)
	{
		case 1:
			cout << "Enter 1st number=";
			cin >> a;
			cout << "Enter 2nd number=";
			cin >> b;
			c=a+b;
			cout << "Sum of numbers=" << c;
			break;
			
		case 2:
			cout << "Enter 1st number=";
			cin >> a;
			cout << "Enter 2nd number=";
			cin >> b;
			c=a-b;
			cout << "Difference of numbers=" << c;
			break;
			
		case 3:
			cout << "Enter 1st number=";
			cin >> a;
			cout << "Enter 2nd number=";
			cin >> b;
			c=a;
			c=c/b;
			cout << "Quotient of numbers=" << c;
			break;
		
		case 4:
			cout << "Enter 1st number=";
			cin >> a; 
			cout << "Enter 2nd number=";
			cin >> b;
			c=a*b;
			cout << "Multiplication of numbers=" << c;
			break;	
		
		case 5:
			cout << "Enter 1st number=";
			cin >> a;
			cout << "Enter 2nd number=";
			cin >> b;
			c=a%b;
			cout << "Modulus of numbers=" << c;
			break;
			
		case 6:
			cout << "Enter a number=";
			cin >> a;
			cout << "Enter the power you want the result in:";
			cin >> x;
			c=pow(a,x);
			cout << "Power of numbers=" << c;
			break;
			
		case 7:
			cout << "Enter a number=";
			cin >> a;
			c=sqrt(a);
			cout << "Square root of numbers=" << c;
			
		default:
			cout << "Operation invalid";
	}
	
return 0;
}
