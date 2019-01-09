#include <iostream>
using namespace std;

bool year_check(char regNum[])
{
    bool value = true;
    int x = 0;
    while (regNum[x] != '-')
    {
        if (regNum[x] >= '0' && regNum[x] <= '9')
        {
        }
        else
        {
            value = false;
            break;
        }
        x++;
    }
    return value;
}

bool dep_check(char regNum[])
{
    bool value = true;
    int x = 5;
    while (regNum[x] != '-')
    {
        if (regNum[x] >= 'A' && regNum[x] <= 'Z')
        {
        }
        else
        {
            value = false;
            break;
        }
        x++;
    }
    return value;
}

bool rollnum_check(char regNum[])
{
    bool value = true;
    int x = 8;
    while (regNum[x] != '\0')
    {
        if (regNum[x] >= '0' && regNum[x] <= '9')
        {
        }
        else
        {
            value = false;
            break;
        }
        x++;
    }
    return value;
}

int main()
{
    char *regNum = new char[12];
    for (int i = 0; i < 12; i++)
    {
        regNum[i] = '\0';
    }

    while (true)
    {

        cout << "Enter UET registration Number: ";
        for (int x = 0; x < 11; x++)
        {
            cin >> regNum[x];
        }

        cout << endl;
        if (year_check(regNum) == 1 && dep_check(regNum) == 1 && rollnum_check(regNum) == 1)
        {
            int x = 0;
            cout << "\nSession: ";
            while (regNum[x] != '-')
            {
                cout << regNum[x];
                x++;
            }
            x++;
            cout << "\nDepartment: ";
            while (regNum[x] != '-')
            {
                cout << regNum[x];
                x++;
            }
            x++;
            cout << "\nRoll Number: ";
            while (regNum[x] != '\0')
            {
                cout << regNum[x];
                x++;
            }
            break;
        }
        else
        {
            cout << endl
                 << "Invalid registration number.\n";
        }
    }
    delete[] regNum;
    return 0;
}
