#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inData;
    inData.open("Problem14In.txt");
    char arr[1000] = {'\0'};

    inData.get(arr, 1000);
    cout << arr << endl;
    for (int x = 0; arr[x] != '\0'; x++)
    {
        if (arr[x] == 'd' && arr[x + 1] == 'o' && arr[x + 2] == 'g')
        {
            arr[x] = 'c';
            arr[x + 1] = 'a';
            arr[x + 2] = 't';
        }
    }
    inData.close();

    ofstream outData;
    outData.open(" Problem14output.txt");
    outData << arr;
    outData.close();

    return 0;
}