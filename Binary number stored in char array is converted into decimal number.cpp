#include <iostream>
#include <cmath>
using namespace std;

bool check(char arr[])
{
    int value = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '1' || arr[i] == '0')
        {
            value = 1;
        }
        else
        {
            value = 0;
            break;
        }
    }
    return value;
    
}
int main()
{
    char arr[50] = {'\0'};

    cout << "Enter a Binary Number: ";
    cin >> arr;
    while (check(arr) == 0)
    {
        cout << "\nInvalid Binary Number. Enter number again: ";
        cin >> arr;
    }

    int num = atoi(arr);
    int i = 0, rem, sum = 0, dec_num, num2;

    while (num != 0)
    {
        rem = num % 10;
        num2 = pow(2, i);
        dec_num = rem * num2;
        sum = sum + dec_num;
        i++;
        num = (num - rem) / 10;
    }

    cout << "The decimal number of binary: " << sum;
}
