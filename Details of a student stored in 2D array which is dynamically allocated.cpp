#include <iostream>
using namespace std;
int main()
{
    const int row = 3;
	const int col = 100;
    char *arr = new char[100]; 
	char **arr2 = new char*[row];
	for(int x=0; x<row; x++)
    {
        arr2[x] = new char[col];
    }
	for(int x=0; x < row; x++)
    {
        for(int y=0; y < col; y++)
        {
            arr2[x][y]='\0';
        }
    }
		
    for(int x=0; x < 100; x++)
    {
        arr[x] = '\0';
    }
    cout << "Enter the details of student in format -- name, registration number, city: ";
    cin.getline(arr,100);

    int x = 0, y = 0, a = 0;

    while (arr[a] != '\0')
    {

        arr2[x][y] = arr[a];
        y++;

        a++;
    }

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; arr2[a][b]!='\0'; b++)
        {
            cout << arr2[a][b];
        }
    }
}
