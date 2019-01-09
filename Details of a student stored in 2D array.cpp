#include <iostream>
using namespace std;
int main()
{
    char arr[100] = {'\0'}, arr2[3][100] = {'\0'};
    cout << "Enter the details of student in format -- name, registration number, city: ";
    cin.get(arr, 100);

    int x = 0, y = 0, a = 0;

    while (arr[a] != '\0')
    {

        arr2[x][y] = arr[a];
        y++;

        a++;
    }

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 100; b++)
        {
            cout << arr2[a][b];
        }
    }
}