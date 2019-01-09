#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    ifstream inData;
    inData.open("Problem9.txt");

    int x = 0, sum = 0;
    char arr[40], arr2[40];
    int num, num2, final_num;
    inData >> arr;
    inData >> arr2;

    while (arr[x] != '\0')
    {
        if (arr[x] != ',')
        {

            num = arr[x] - 48;
            if (arr[x + 1] != ',')
            {
                num2 = arr[x + 1] - 48;
                final_num = (num * 10) + num2;
                x += 2;
            }
            else
            {
                final_num = num;
                x++;
            }

            sum = sum + final_num;
        }
        else
        {
            x++;
        }
    }

    cout << endl
         << sum;

    sum = 0;
    x = 0;
    while (arr2[x] != '\0')
    {
        if (arr2[x] != ',')
        {

            num = arr2[x] - 48;
            if (arr2[x + 1] != ',')
            {
                num2 = arr2[x + 1] - 48;
                final_num = (num * 10) + num2;
                x += 2;
            }
            else
            {
                final_num = num;
                x++;
            }

            sum = sum + final_num;
        }
        else
        {
            x++;
        }
    }
    cout << endl
         << sum;
    inData.close();
    return 0;
}
