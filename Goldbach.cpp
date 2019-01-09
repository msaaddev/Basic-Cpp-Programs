#include <iostream>
#include <stdlib.h>
using namespace std;

bool prime_check(int num)
{
    bool value;
    int a = 2, y;
    while (a < num)
    {
        if (num % a == 0)
        {
            y = 1;
            break;
        }
        a++;
    }
    if (y == 1)
    {
        value = 0;
    }
    else
    {
        value = 1;
    }
    return value;
}
int main()
{
    int number, c = 0;
    int comb[1000] = {0};
    cout << "Enter a number between 4 to 50000: ";
    cin >> number;

    while (number <= 4 || number >= 50000)
    {
        cout << "Invalid number. Enter the number again: ";
        cin >> number;
    }

    for (int x = 1; x < number; x++)
    {
        cout << "value of x: " << x << endl;

        if (prime_check(x))
        {	
            
            for (int y = 1; y < number; y++)
            {
                cout << "value of y: " << y << endl;
                if (prime_check(y))
                {
                    
                    if(x + y == number)
                    {
                        
                        comb[c] = x;
                        comb[c+1] = y;
                        
                        c+=2;
                    }
                }
            }
        }
    }

	system ("CLS");
    int num = c;
    cout << "\nCombinations: ";
    for(int i=0; i <=num-1; i++)
    {
        cout << comb[i] << " ";
        if(i%2!=0)
        {
            if(i!=num-1)
            {
                cout << ", ";
            }
            else
            {
                
            }
            
        }
    }
  
    return 0;
}
